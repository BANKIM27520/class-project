#include<stdio.h>
struct Student {
    char name[50];
    int roll;
    int phys, chem, maths, eng, comp;
};

int main() {
    struct Student s;
    printf("ENTER THE STUDENT NAME: ");
    scanf("%s",s.name);
    printf("ENTER THE STUDENT ROLL NUMBER: ");
    scanf("%d", &s.roll);
    printf("ENTER THE MARKS OF PHYSICS: ");
    scanf("%d", &s.phys);
    printf("ENTER THE MARKS OF CHEMISTRY: ");
    scanf("%d", &s.chem);
    printf("ENTER THE MARKS OF MATHEMATICS: ");
    scanf("%d", &s.maths);
    printf("ENTER THE MARKS OF ENGLISH: ");
    scanf("%d", &s.eng);
    printf("ENTER THE MARKS OF COMPUTER SCIENCE: ");
    scanf("%d", &s.comp);

    // Example output
    printf("\nStudent: %s\nRoll: %d\nPhysics: %d\nChemistry: %d\nMathematics: %d\nEnglish: %d\nComputer Science: %d\n",
        s.name, s.roll, s.phys, s.chem, s.maths, s.eng, s.comp);

    return 0;
}