#include<stdio.h>
#include<string.h>
struct student
{
    char name[50];
    int roll_no;
};
struct student s[5];
int main()
{
    // Input details for 5 students
    for(int i = 0; i < 5; i++)
    {
        printf("Enter details for student %d\n", i + 1);
        printf("Enter Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        int len = strlen(s[i].name);
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll_no);
        getchar(); 
    }
    printf("STUDENT DETAIL IN ASCENDING ORDER OF ROLL NO:\n");
    for(int i = 0; i < 5; i++)
    {
        for(int j = i + 1; j < 5; j++)
        {
            if(s[i].roll_no > s[j].roll_no)
            {
                struct student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for(int i = 0; i < 5; i++)
    {
        printf("Name: %s, Roll Number: %d\n", s[i].name, s[i].roll_no);
    }

    return 0;
}