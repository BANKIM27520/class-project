import tkinter as tk
from tkinter import messagebox
from pymongo import MongoClient
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import datetime
# MongoDB Setup
client = MongoClient("mongodb://localhost:27017/")
db = client["timeflow_db"]
events_collection = db["events"]
tasks_collection = db["tasks"]

class TimeFlowApp(tk.Tk):
    def __init__(self):
        super().__init__()
        self.title("TimeFlow")
        self.geometry("600x400")
        self.configure(bg="#0F52BA")

        heading = tk.Label(self, text="TimeFlow", font=("Helvetica", 32, "bold"), fg="white", bg="#0F52BA")
        heading.pack(pady=40)

        tk.Button(self, text="SET TIME", font=("Arial", 14), bg="black", fg="white", command=self.open_set_time).pack(pady=10)
        tk.Button(self, text="MANAGE TIME", font=("Arial", 14), bg="black", fg="white", command=self.open_manage_time).pack(pady=10)
        tk.Button(self, text="ORGANIZE TIME", font=("Arial", 14), bg="black", fg="white", command=self.open_organize_time).pack(pady=10)
        tk.Button(self, text="SUMMARY DASHBOARD", font=("Arial", 14), bg="black", fg="white", command=self.show_dashboard).pack(pady=20)
    # Reminder Helper
    def schedule_reminder(self, activity, minutes_before):
        ms = minutes_before * 60 * 1000
        self.after(ms, lambda: messagebox.showinfo("Reminder", f"Reminder: '{activity}' starts in {minutes_before} minutes!"))
    # Page 1: Set Time
    def open_set_time(self):
        win = tk.Toplevel(self)
        win.title("Set Time")

        tk.Label(win, text="Activity:").pack()
        entry_activity = tk.Entry(win)
        entry_activity.pack()

        tk.Label(win, text="Time (HH:MM):").pack()
        entry_time = tk.Entry(win)
        entry_time.pack()

        text_output = tk.Text(win, width=50, height=10)
        text_output.pack(pady=10)

        def save_event():
            try:
                activity = entry_activity.get()
                user_time = entry_time.get()
                datetime.datetime.strptime(user_time, "%H:%M")  # validate format
                events_collection.insert_one({"activity": activity, "time": user_time})
                messagebox.showinfo("Saved", f"Event '{activity}' at {user_time}")

                # Reminders
                for m in [60, 30, 15]:
                    self.schedule_reminder(activity, m)

                show_events()
            except:
                messagebox.showerror("Error", "Enter time in HH:MM format")

        def show_events():
            text_output.delete("1.0", tk.END)
            events = list(events_collection.find())
            for e in events:
                text_output.insert(tk.END, f"{e['activity']} at {e['time']}\n")

        tk.Button(win, text="Save Event", command=save_event).pack(pady=10)
        show_events()

    def show_event_stats(self):
        events = list(events_collection.find())
        if not events: return
        df = pd.DataFrame(events)
        counts = df["time"].value_counts()
        counts.plot(kind="bar", color="skyblue")
        plt.title("Events per Time Slot")
        plt.show()
    # Page 2: Manage Time
    def open_manage_time(self):
        win = tk.Toplevel(self)
        win.title("Manage Time")

        text_output = tk.Text(win, width=50, height=10)
        text_output.pack(pady=10)

        events = list(events_collection.find())
        if events:
            times = []
            for e in events:
                t = datetime.datetime.strptime(e["time"], "%H:%M")
                times.append(t)
            times=sorted(times)
            gaps = []
            for i in range(len(times)-1):
                gap = (times[i+1]-times[i]).seconds/60
                gaps.append(gap)
            text_output.insert(tk.END, "Scheduled Activities:\n")
            for e in events:
                text_output.insert(tk.END, f"{e['activity']} at {e['time']}\n")
            for i in range(len(times)-1):
              next_activity_time = times[i+1]
              next_activity_str = next_activity_time.strftime("%H:%M")
              self.schedule_reminder(f"Take a short break before {next_activity_str}", 30)
              self.schedule_reminder(f"Wrap up break — next activity at {next_activity_str}", 5)

            if gaps:
                avg_gap = np.mean(gaps)
                text_output.insert(tk.END, f"\nAverage gap: {avg_gap:.1f} minutes\n")
                text_output.insert(tk.END, "Take a short break to recharge!\n")

                # Reminder after longest gap
                longest_gap = max(gaps)
                self.schedule_reminder("Back to work after break", int(longest_gap))

                pd.Series(gaps).plot(kind="hist", bins=5, color="orange")
                plt.title("Distribution of Gaps (minutes)")
                plt.show()
    # Page 3: Organize Time
    def open_organize_time(self):
        win = tk.Toplevel(self)
        win.title("Organize Time")

        entry_task = tk.Entry(win)
        entry_task.pack()
        urgent_var = tk.BooleanVar()
        important_var = tk.BooleanVar()
        tk.Checkbutton(win, text="Urgent", variable=urgent_var).pack()
        tk.Checkbutton(win, text="Important", variable=important_var).pack()

        text_output = tk.Text(win, width=50, height=10)
        text_output.pack(pady=10)

        def add_task():
            task = {
                "title": entry_task.get(),
                "urgent": urgent_var.get(),
                "important": important_var.get()
            }
            tasks_collection.insert_one(task)
            messagebox.showinfo("Added", "Task saved!")

            # Reminders
            if task["important"]:
                for m in [60, 30, 15]:
                    self.schedule_reminder(task["title"], m)
            else:
                self.schedule_reminder(task["title"], 15)

            show_tasks()
            self.show_task_stats()

        def show_tasks():
            text_output.delete("1.0", tk.END)
            tasks = list(tasks_collection.find())
            for t in tasks:
                text_output.insert(tk.END, f"{t['title']} | Urgent:{t['urgent']} Important:{t['important']}\n")

        tk.Button(win, text="Add Task", command=add_task).pack()
        show_tasks()

    def show_task_stats(self):
        tasks = list(tasks_collection.find())
        if not tasks: return
        df = pd.DataFrame(tasks)
        quadrants = {
            "Do First": len(df[(df["urgent"]==True) & (df["important"]==True)]),
            "Schedule": len(df[(df["urgent"]==False) & (df["important"]==True)]),
            "Delegate": len(df[(df["urgent"]==True) & (df["important"]==False)]),
            "Eliminate": len(df[(df["urgent"]==False) & (df["important"]==False)])
        }
        pd.Series(quadrants).plot(kind="pie", autopct="%1.1f%%")
        plt.title("Eisenhower Matrix Distribution")
        plt.show()
    # Summary Dashboard
    def show_dashboard(self):
        self.show_event_stats()
        events = list(events_collection.find())
        if events:
            times = sorted([datetime.datetime.strptime(e["time"], "%H:%M") for e in events])
            gaps = []
            for i in range(len(times)-1):
                gap = (times[i+1]-times[i]).seconds/60
                gaps.append(gap)
            if gaps:
                pd.Series(gaps).plot(kind="hist", bins=5, color="orange")
                plt.title("Distribution of Gaps (minutes)")
                plt.show()
        self.show_task_stats()
# Run App
if __name__ == "__main__":
    app = TimeFlowApp()
    app.mainloop()

