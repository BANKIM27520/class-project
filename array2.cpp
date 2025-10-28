#include<stdio.h>
int main()
{
    int n,i;
    printf ("ENTER THE NO. OF INTEGER YOU WANT TO STORE IN THE ARRAY:\n");
    scanf ("%d",&n);
    int arr[n];
    printf("ENTER %d ELEMENTS OF THE ARRAY:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            if(arr[i]%2==0)
            {
                printf("THE EVEN AND POSITIVE ELEMENTS IN THE ARRAY IS: %d\n",arr[i]);
            }
            else
            {
                printf("THE ODD AND POSITIVE ELEMENTS IN THE ARRAY IS: %d\n",arr[i]);
            }
        }
        else
        {
            if(arr[i]%2==0)
            {
                printf("THE EVEN AND NEGATIVE ELEMENTS IN THE ARRAY IS: %d\n",arr[i]);
            }
            else
            {
                printf("THE ODD AND NEGATIVE ELEMENTS IN THE ARRAY IS: %d\n",arr[i]);
            }
        }
    }

}