#include<stdio.h>
int main()
{
    int i,k;
    int n=1,m=1;
    printf("ENTER THE NO. YOU WANT TO PRINT THE SERIES UPTO:");
    scanf("%d",&k);
    printf("FIBONACCI SERIES IS:\n");
    for(i=0;i<=k;i++)
    {
        if(i==0)
        printf("0\t");
    else if(i==1||i==2)
    printf("1\t");
    else
    {
        int sum=n+m;
        printf("%d\t",sum);
        n=m;
        m=sum;
    }
    
    }


}