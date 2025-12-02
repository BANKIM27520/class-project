#include<stdio.h>
struct DATE
{
    int day;
    int month;
    int year;
};
struct employee
{
    char name[50];
    int id;
    struct DATE dob;
    float salary;
};
int main()
{
    struct employee emp;

    // Input employee details
    printf("Enter Employee Name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Date of Birth (DD MM YYYY): ");
    scanf("%d %d %d", &emp.dob.day, &emp.dob.month, &emp.dob.year);
    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    // Print employee details
    printf("\nEmployee Details:\n");
    printf("Name: %s", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Date of Birth: %02d/%02d/%04d\n", emp.dob.day, emp.dob.month, emp.dob.year);
    printf("Salary: %.2f\n", emp.salary);

    return 0;
}