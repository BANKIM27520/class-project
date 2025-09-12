#include<stdio.h>
int main()
{
    int i;
    printf("THE EVEN NUMBERS BETWEEN 1 TO 100 ARE:\n");
    for(i=100;i<=200;i++)
    {
        if(i%2==0)
        printf("%d\n",i);
    }
    return 0;
}
