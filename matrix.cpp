#include<stdio.h>
int main()
{
    int n,m;
    printf("ENTER THE ROWS AND COLUMNS OF THE MATRIX\n");
    scanf("%d%d",&n,&m);
    int matrix[n][m];
    printf("ENTER THE ELEMENTS OF THE MATRIX\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("THE ENTERED MATRIX IS\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    int p,q;
    printf("ENTER THE ROWS AND COLUMNS OF THE SECOND MATRIX\n");
    scanf("%d%d",&p,&q);
    int matrix2[p][q];
    printf("ENTER THE ELEMENTS OF THE SECOND MATRIX\n");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }
    printf("THE SECOND MATRIX IS\n");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%d ",matrix2[i][j]);
        }
        printf("\n");
    }
    if(m!=p)
    {
        printf("MATRIX MULTIPLICATION NOT POSSIBLE\n");
        return 0;
    }
    else
    {
        printf("THE RESULTANT MATRIX AFTER MULTIPLICATION IS\n");
        int result[n][q];
        for(int i=0;i<n;i++)
        {
            printf("\n");
           for(int j=0;j<q;j++)
           {
             result[i][j]=0;
             for(int k=0;k<m;k++)
             {
                result[i][j]+=matrix[i][k]*matrix2[k][j];
             }
              printf("%d ",result[i][j]);
            }
        }
    }  
}