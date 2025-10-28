#include<stdio.h>
int main()
{
    int n,i,j;
    printf ("ENTER THE NO. OF INTEGER YOU WANT TO STORE IN THE ARRAY:\n");
    scanf ("%d",&n);
    int arr[n];
    printf("ENTER %d ELEMENTS OF THE ARRAY:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ENTER THE SPECIFIC ELEMENT TO FIND :\n");
    int specific;
    scanf("%d",&specific);
    int frequency=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==specific)
        {
            frequency++;
        }
    }
    printf("FREQUENCY OF THE SPECIFIC ELEMENT %d IS: %d\n",specific,frequency);
    return 0;
}