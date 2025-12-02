/*Write a function that accepts pointers as parameters. 
Pass variables by reference using pointers and modify their values within the function.*/
#include<stdio.h>
void modifyValues(int *a, float *b, char *c) {
    *a += 10;          // Increment integer by 10
    *b *= 2.0f;       // Double the float value
    *c = (*c >= 'a' && *c <= 'z') ? (*c - ('a' - 'A')) : *c; // Convert char to uppercase if it's lowercase
}
int main() {
    int intVar = 5;
    float floatVar = 3.5f;
    char charVar = 'b';

    printf("Before modification:\n");
    printf("Integer: %d\n", intVar);
    printf("Float: %.2f\n", floatVar);
    printf("Character: %c\n", charVar);

    modifyValues(&intVar, &floatVar, &charVar);

    printf("\nAfter modification:\n");
    printf("Integer: %d\n", intVar);
    printf("Float: %.2f\n", floatVar);
    printf("Character: %c\n", charVar);

    return 0;
}