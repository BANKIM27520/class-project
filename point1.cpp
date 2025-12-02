/*Declare different types of pointers (int, float, char) and initialize them with the addresses of variables. 
Print the values of both the pointers and the variables they point to.*/
#include<stdio.h>
int main()
{
    int intVar = 42;
    float floatVar = 3.14f;
    char charVar = 'A';

    int *intPtr = &intVar;
    float *floatPtr = &floatVar;
    char *charPtr = &charVar;

    // Print values of variables
    printf("Value of intVar: %d\n", intVar);
    printf("Value of floatVar: %.2f\n", floatVar);
    printf("Value of charVar: %c\n", charVar);

    // Print values using pointers
    printf("Value pointed to by intPtr: %d\n", *intPtr);
    printf("Value pointed to by floatPtr: %.2f\n", *floatPtr);
    printf("Value pointed to by charPtr: %c\n", *charPtr);

    // Print addresses
    printf("Address of intVar: %p, Address stored in intPtr: %p\n", (void*)&intVar, (void*)intPtr);
    printf("Address of floatVar: %p, Address stored in floatPtr: %p\n", (void*)&floatVar, (void*)floatPtr);
    printf("Address of charVar: %p, Address stored in charPtr: %p\n", (void*)&charVar, (void*)charPtr);

    return 0;
}

