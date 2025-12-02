/*Perform pointer arithmetic (increment and decrement) on pointers of different data types. 
Observe how the memory addresses change and the effects on data access.*/
#include<stdio.h>
int main()
{
    int intArr[] = {10, 20, 30, 40, 50};
    float floatArr[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
    char charArr[] = {'A', 'B', 'C', 'D', 'E'};

    int *intPtr = intArr;
    float *floatPtr = floatArr;
    char *charPtr = charArr;

    printf("Integer Array Pointer Arithmetic:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("Address: %p, Value: %d\n", (void*)intPtr, *intPtr);
        intPtr++; // Increment pointer
    }

    printf("\nFloat Array Pointer Arithmetic:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("Address: %p, Value: %.2f\n", (void*)floatPtr, *floatPtr);
        floatPtr++; // Increment pointer
    }

    printf("\nCharacter Array Pointer Arithmetic:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("Address: %p, Value: %c\n", (void*)charPtr, *charPtr);
        charPtr++; // Increment pointer
    }

    return 0;
}