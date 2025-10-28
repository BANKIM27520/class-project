#include<stdio.h>
void employee()
{
    char name[70];
    printf("ENTER THER NAME OF THE EMPLOYEE: ");
    scanf("%s",name);
    int id;
    printf("ENTER THE ID OF THE EMPLOYEE: ");
    scanf("%d",&id);
    char dept[50];
    printf("ENTER THE DEPARTMENT OF THE EMPLOYEE: ");
    scanf("%s",dept);
    float salary;
    printf("ENTER THE SALARY OF THE EMPLOYEE: ");
    scanf("%f",&salary);
    printf("\nEMPLOYEE DETAILS:\nNAME: %s\nID: %d\nDEPARTMENT: %s\nSALARY: %.2f\n",name,id,dept,salary);
}
int main()
{
    employee();
    return 0;
}
