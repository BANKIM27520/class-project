#include<stdio.h>
int main()
{
    int arr[5],i;
    printf("ENTER 5 ELEMENTS OF THE ARRAY:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0], second=arr[0];
    for(i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            second=max;
            max=arr[i];
        }
        
    }
    printf("SECOND LARGEST ELEMENT IS: %d\n",second);
    return 0;
}