#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("ENTER THE FIRST NUMBER:");
    scanf("%d",&a);
    printf("ENTER THE OPERATOR(+,-,*,/,% %):");
    scanf(" %c",&op);
    printf("ENTER THE SECOND NUMBER:");
    scanf("%d",&b);
    switch(op)
    {
        case '+':
            printf("ADDITION=%d\n",a+b);
            break;
        case '-':
            printf("SUBTRACTION=%d\n",a-b);
            break;
        case '*':
            printf("MULTIPLICATION=%d\n",a*b);
            break;
        case '/':
            if(b!=0)
                printf("DIVISION=%.2f\n",(float)a/b);
            else
                printf("ERROR:DIVISION BY ZERO\n");
            break;
        case '%':
            if(b!=0)
                printf("MODULUS=%d\n",a%b);
            else
                printf("ERROR:MODULUS BY ZERO\n");
            break;
        default:
            printf("INVALID OPERATOR\n");
    }
    return 0;
}