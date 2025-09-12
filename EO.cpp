#include<stdio.h>
int main()
{
    int n;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    if(n%2==0)
    printf("THE NUMBER IS EVEN:%d",n);
    else
    printf("THE NUMBER IS ODD:%d",n);
    return 0;
}