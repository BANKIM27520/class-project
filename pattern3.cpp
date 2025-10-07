#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the rows for the shape:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if (i==1||i==n)
        {
          for(j=1;j<=n;j++)
           {
            printf("*\t");
           }
              printf("\n");
        }
        else
        {
            for(j=1;j<=n;j++)
            {
                if (j==1||j==n)
                printf("*\t");
                else
                printf(" \t");
            }
            printf("\n");
        }
    }

}