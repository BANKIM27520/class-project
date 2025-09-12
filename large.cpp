/*ENTER THREE NUMBER AND FIND THE GREATEST NUMBER*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("ENTER THE VALUE OF A:");
    scanf("%d",&a);
    printf("ENTER THE VALUE OF B:");
    scanf("%d",&b);
    printf("ENTER THE VALUE OF C:");
    scanf("%d",&c);
    if(a>b&&a>c)
    printf("A IS THE GREATEST NUMBER:%d",a);
    else if(b>a&&b>c)
    printf("B IS THE GREATEST NUMBER:%d",b);
    else
    printf("C IS THE GREATEST NUMBER:%d",c);
    return 0;

}