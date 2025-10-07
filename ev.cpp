#include<stdio.h>
int main()
{
    int num;
    printf("ENTER A NUMBER:");
    scanf("%d",&num);
    (num%2==0)?printf("%d IS EVEN\n",num):printf("%d IS ODD\n",num);
    return 0;
}