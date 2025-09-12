/*CALCULATE THE REMAINDER AND QUOTIENT OF THE NUMBER */
#include<stdio.h>
int main()
{
    int a,b,remai,qot;
    printf("ENTER THE VALUE OF A:");
    scanf("%d",&a);
    printf("ENTER THE VALUE OF B:");    
    scanf("%d",&b);
    if(b!=0)
    {
        qot=a/b;
        remai=a%b;
        printf("THE QUOTIENT IS:%d\n",qot);
        printf("THE REMAINDER IS:%d\n",remai);
    }
    else
    {
        printf("DIVISION BY ZERO IS NOT POSSIBLE");
    }
    return 0;
}
