/*Generate all even numbers between 100 and 200.*/
#include<stdio.h>
int main()
{
    printf("EVEN NUMBERS BETWEEN 100 AND 200 ARE:\n");
    for(int i=100;i<=200;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
        else
        {
            continue;
        }
    }
    return 0;
}