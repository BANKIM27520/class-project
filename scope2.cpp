#include <stdio.h>

int main()
{
    int x = 1;
    printf("Outside any block: x = %d\n", x);
    { // first block
        int a = 10;          
        x = 2;               
        printf("Inside first block: a = %d, x = %d\n", a, x);
        { // nested block
            int b = 20;      
            printf("Inside nested block: a = %d, b = %d\n", a, b);
        }   
    }
    // loop-scoped variable
    for (int i = 0; i < 3; ++i)
    {
        printf("Inside loop, i = %d\n", i);
    }
    int n = 5;
    printf("Before shadowing, n = %d\n", n);
    {
        int n = 100; 
        printf("Inside shadow block, n = %d\n", n);
    }
    printf("After shadowing, outer n = %d\n", n);

    return 0;
}