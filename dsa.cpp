/*BY USING DIGIT SEPRATION TECHNIQUE WE ARE GOING TO ADD 
THE SUM OF THE NUMBER EXAMPLE IF THE NO. IS 123 THEN THE
SUM OF THE NO. WILL BE 6*/
#include<stdio.h>
int main()
{
    int n,sum=0,N;
    printf("ENTER THE NUMBER =\t");
    scanf("%d",&n);
    while(n!=0)
    {
        N=n%10;
        sum=sum+N;
        n=n/10;
    }
    printf("THE SUM OF THE NO.= %d",sum);
    return 0;
}