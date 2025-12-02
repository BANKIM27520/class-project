/*2.	Write a program to use these standard libraries: stdio.h, ctype.h, stdlib.h, assert.h, stdarg.h, time.h, math.h, string.h*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <assert.h>
#include <stdarg.h>
#include <time.h>
#include <math.h>
#include <string.h>
void demoCtype(const char *str) {
    printf("Ctype Demo:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            printf("%c is uppercase\n", str[i]);
        } else if (islower(str[i])) {
            printf("%c is lowercase\n", str[i]);
        } else if (isdigit(str[i])) {
            printf("%c is a digit\n", str[i]);
        } else {
            printf("%c is a special character\n", str[i]);
        }
    }
}
void demoStdarg(int count, ...) {
    printf("\nStdarg Demo:\n");
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; i++) {
        int value = va_arg(args, int);
        printf("Argument %d: %d\n", i + 1, value);
    }
    va_end(args);
}
void demoTime() {
    printf("\nTime Demo:\n");
    time_t now = time(NULL);
    struct tm *t = localtime(&now);
    printf("Current date and time: %02d-%02d-%04d %02d:%02d:%02d\n",
           t->tm_mday, t->tm_mon + 1, t->tm_year + 1900,
           t->tm_hour, t->tm_min, t->tm_sec);
}
void demoMath(double value) {
    printf("\nMath Demo:\n");
    printf("Square root of %.2f is %.2f\n", value, sqrt(value));
    printf("Power of %.2f raised to 2 is %.2f\n", value, pow(value, 2));
}
void demoString(const char *str1, const char *str2) {
    printf("\nString Demo:\n");
    printf("Length of string 1: %zu\n", strlen(str1));
    printf("Concatenation of string 1 and string 2: %s\n", strcat(strcpy((char *)malloc(strlen(str1) + strlen(str2) + 1), str1), str2));
}
int main() {
    const char *testStr = "Hello World! 123";
    demoCtype(testStr);

    demoStdarg(3, 10, 20, 30);

    demoTime();

    demoMath(16.0);

    const char *str1 = "Hello, ";
    const char *str2 = "World!";
    demoString(str1, str2);

    return 0;
}
