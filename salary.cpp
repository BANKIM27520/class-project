#include<stdio.h>
#include<string.h>
void salary()
{
    float basic;
    printf("ENTER THE BASIC SALARY: ");
    scanf("%f",&basic);
    char city[50];
    printf("ENTER THE CITY (METRO/NON-METRO): ");
    scanf("%s",city);
    if(strcmp(city,"METRO")==0)
    {
        float hra=0.15*basic;
        float da=0.05*basic;
        float gross_salary=basic+hra+da;
        printf("\nGROSS SALARY IN METRO CITY: %.2f\n",gross_salary);
    }
    else if(strcmp(city,"NON-METRO")==0)
    {
        float hra=0.10*basic;
        float da=0.05*basic;
        float gross_salary=basic+hra+da;
        printf("\nGROSS SALARY IN NON-METRO CITY: %.2f\n",gross_salary);
    }
    else
    {
        printf("INVALID CITY TYPE ENTERED.\n");
    }
}
int main()
{
    salary();
    return 0;
} 