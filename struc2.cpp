#include<stdio.h>
struct student
{
    char name[50];
    int roll_no;
    float marks;
};
int main()
{
    struct student s;

    // Input student details
    printf("Enter Student Name: ");
    fgets(s.name, sizeof(s.name), stdin);
    printf("Enter Roll Number: ");
    scanf("%d", &s.roll_no);
    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    // Print student details
    printf("\nStudent Details:\n");
    printf("Name: %s", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}