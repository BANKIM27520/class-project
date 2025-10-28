/*TO PRINT AND CHECK WHETHER THE NO. IS PALINDROME OR NOT*/
#include<stdio.h>
int main()
{
    int n,rev=0,rem,temp;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev)
        printf("The number %d is palindrome",rev);
    else
        printf("The number %d is not palindrome",rev);
    return 0;
}