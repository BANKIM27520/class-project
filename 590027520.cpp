#include<stdio.h>
#include<string.h>
#define MAX 100
int n;
struct student
{
  char name[70];
  int roll_no;
  char phone_no[15];
  int sap_id;
  char email[20];
  int year;
  int semester;
  float sgpa[8];
};
struct student s[MAX];
void input()
{
  int i,j;
  float sum;
  printf("Enter number of students YOU WANT TO ENTER THE DATA FOR: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    sum=0;
    printf("\nEnter details of student %d\n",i+1);
    printf("Name: ");
    scanf("%s",s[i].name);
    printf("Roll No: ");
    scanf("%d",&s[i].roll_no);
    printf("Phone No: ");
    do{
      scanf("%s",s[i].phone_no);
      if(strlen(s[i].phone_no)!=10)
      {
        printf("Invalid phone number. Please enter a 10-digit phone number.\n");
      }
    }while(strlen(s[i].phone_no)!=10);
    printf("SAP ID: ");
    scanf("%d",&s[i].sap_id);
    printf("Email: ");
    do{
    scanf(" %s",s[i].email);
    if(strchr(s[i].email,'@')==NULL)
    {
      printf("Invalid email address. Please include an '@' symbol.\n");
    }
    }while(strchr(s[i].email,'@')==NULL);
    printf("Year: ");
    scanf("%d",&s[i].year);
    printf("Semester: ");
    scanf("%d",&s[i].semester);
    for(j=0;j<s[i].semester;j++)
    {
      printf("Enter SGPA of semester %d: ",j+1);
      scanf("%f",&s[i].sgpa[j]);
    }
  }
}
void display()
{
  int i,j;
  int roll;
  printf("ENTER THE ROLL NO OF STUDENT WHOSE DETAILS YOU WANT TO DISPLAY: ");
  scanf("%d",&roll);
  for(i=0;i<n;i++)
  {
    if(s[i].roll_no==roll)
    {
      printf("\nDetails of student %d\n",i+1);
      printf("Name: %s\n",s[i].name);
      printf("Roll No: %d\n",s[i].roll_no);
      printf("Phone No: %s\n",s[i].phone_no);
      printf("SAP ID: %d\n",s[i].sap_id);
      printf("Email: %s\n",s[i].email);
      printf("Year: %d\n",s[i].year);
      printf("Semester: %d\n",s[i].semester);
      for(j=0;j<s[i].semester;j++)
      {
        printf("SGPA of semester %d: %.2f\n",j+1,s[i].sgpa[j]);
      }
    }  
  }
}
void cgpa()
{
  int i;
  float sum;
  for(i=0;i<n;i++)
  {
    sum=0;
    for(int j=0;j<s[i].semester;j++)
    {
      sum=sum+s[i].sgpa[j];
    }
    printf("CGPA of student %s is: %.2f\n",s[i].name,sum/s[i].semester);
  }
}
void average_cgpa()
{
  int i;
  float sum=0;
  for(i=0;i<n;i++)
  {
    float sgpa_sum=0;
    for(int j=0;j<s[i].semester;j++)
    {
      sgpa_sum=sgpa_sum+s[i].sgpa[j];
    }
    sum=sum+(sgpa_sum/s[i].semester);
  }
  printf("Average CGPA of all students is: %.2f\n",sum/n);
}
void all()
{
  int i,j;
  for(i=0;i<n;i++)
  {
    float sum=0.0;
    printf("\nDetails of student %d\n",i+1);
    printf("Name: %s\n",s[i].name);
    printf("Roll No: %d\n",s[i].roll_no);
    printf("Phone No: %s\n",s[i].phone_no);
    printf("SAP ID: %d\n",s[i].sap_id);
    printf("Email: %s\n",s[i].email);
    printf("Year: %d\n",s[i].year);
    printf("Semester: %d\n",s[i].semester);
    for(j=0;j<s[i].semester;j++)
    {
      printf("SGPA of semester %d: %.2f\n",j+1,s[i].sgpa[j]);
    }
    for(j=0;j<s[i].semester;j++)
    {
      sum=sum+s[i].sgpa[j];
    }
    float cgpa=sum/s[i].semester;
    printf("CGPA: %.2f\n",cgpa);
  }
}
void delete_student()
{
  int i,roll,found=0;
  printf("ENTER THE ROLL NO OF STUDENT TO BE DELETED: ");
  scanf("%d",&roll);
  for(i=0;i<n;i++)
  {
    if(s[i].roll_no==roll)
    {
      found=1;
      for(int j=i;j<n-1;j++)
      {
        s[j]=s[j+1];
      }
      n--;
      printf("STUDENT RECORD DELETED SUCCESSFULLY\n");
      break;
    }
  }
  if(found==0)
  {
    printf("STUDENT RECORD NOT FOUND\n");
  }
}
void ascending_order()
{
  int i,j;
  struct student temp;
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(s[i].sap_id>s[j].sap_id)
      {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
      }
    }
  }
  printf("...STUDENTS SORTED IN ASCENDING ORDER OF SAPID...\n");
  for(i=0;i<n;i++)
  {
    printf("Name: %s, Roll No: %d, SAP ID: %d\n",s[i].name,s[i].roll_no,s[i].sap_id);
  }
}
void name()
{
  int i,j;
  struct student temp;
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(strcmp(s[i].name,s[j].name)>0)
      {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
      }
    }
  }
  printf("...STUDENTS SORTED IN ALPHABETICAL ORDER OF NAME...\n");
  for(i=0;i<n;i++)
  {
    printf("Name: %s, Roll No: %d\n,SAP_ID: %d\n",s[i].name,s[i].roll_no,s[i].sap_id);
  }
}
int main()
{
  input();
  int choice;
  do
  {
    printf("\nMENU\n1. Display Student Details\n2. Calculate CGPA of each student\n3. Calculate Average CGPA of all students\n4. Display All Students' Details\n5. Delete a Student Record\n6. Sort Students by SAP ID in Ascending Order\n7. Sort Students by Name in Alphabetical Order\n8. Exit\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
        display();
        break;
      case 2:
        cgpa();
        break;
      case 3:
        average_cgpa();
        break;
      case 4:
        all();
        break;
      case 5:
        delete_student();
        break;
      case 6:
        ascending_order();
        break;
      case 7:
        name();
        break;
      case 8:
        printf("Exiting...\n");
        break;
      default:
        printf("Invalid choice. Please try again.\n");
    }
  }while(choice!=8);
  return 0;  
}

