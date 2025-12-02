#include<stdio.h>
#include<string.h>
struct employee
{
    char name[50];
    char address[100];
    int age;
    float salary;
};
struct employee emp[5];
int main()
{
    // Input details for 5 employees
    for(int i = 0; i < 5; i++)
    {
        printf("Enter details for employee %d\n", i + 1);
        printf("Enter Name: ");
        fgets(emp[i].name, sizeof(emp[i].name), stdin);
        printf("Enter Address: ");
        fgets(emp[i].address, sizeof(emp[i].address), stdin);
        printf("Enter Age: ");
        scanf("%d", &emp[i].age);
        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
        getchar(); // to consume the newline character left by previous scanf
    }

    printf("EMPLOYEE DETAILS IN ALPHABETICAL ORDER OF NAME:\n");
    for(int i = 0; i < 5; i++)
    {
        for(int j = i + 1; j < 5; j++)
        {
            if(strcmp(emp[i].name, emp[j].name) > 0)
            {
                struct employee temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }
    for(int i = 0; i < 5; i++)
    {
        printf("Name: %sAddress: %sAge: %d\nSalary: %.2f\n", emp[i].name, emp[i].address, emp[i].age, emp[i].salary);
    }

    return 0;
}