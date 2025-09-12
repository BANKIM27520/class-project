/*TO FIND THE SUM OF THE MULTIPLE OF 3 AND 5 BELOW 1000*/
#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=0;i<=1000;i++)
    {
        if(i%3==0||i%5==0)
        sum=sum+i;
    }
    printf("THE SUM OF THE MULTIPLE OF 3 AND 5 ARE:%d",sum);
    return 0;
}