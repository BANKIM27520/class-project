/*1.	Write a program to define multiple macro to perform arithmetic functions*/
#include <stdio.h>
#define ADD(a, b) ((a) + (b))
#define SUB(a, b) ((a) - (b))
#define MUL(a, b) ((a) * (b))
#define DIV(a, b) ((b) != 0 ? ((a) / (b)) : 0) // Avoid division by zero
int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Perform arithmetic operations using macros
    printf("Addition: %d + %d = %d\n", num1, num2, ADD(num1, num2));
    printf("Subtraction: %d - %d = %d\n", num1, num2, SUB(num1, num2));
    printf("Multiplication: %d * %d = %d\n", num1, num2, MUL(num1, num2));
    if (num2 != 0) {
        printf("Division: %d / %d = %d\n", num1, num2, DIV(num1, num2));
    } else {
        printf("Division: Division by zero is not allowed.\n");
    }

    return 0;
}
