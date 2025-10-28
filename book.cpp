#include<stdio.h>
int main()
{
    char title[100];
    printf("ENTER THE BOOK TITLE:");
    scanf("%s",title);
    char author[100];
    printf("ENTER THE AUTHOR NAME:");
    scanf("%s",author);
    int isbn;
    printf("ENTER THE ISBN NUMBER:");
    scanf("%d",&isbn);
    float price;
    printf("ENTER THE BOOK PRICE:");
    scanf("%f",&price);
    char publisher[100];
    printf("ENTER THE PUBLISHER NAME:");
    scanf("%s",publisher);
    int year;
    printf("ENTER THE PUBLICATION YEAR:");
    scanf("%d",&year);
    printf("BOOK DETAILS:\n");
    printf("TITLE:%s\n",title);
    printf("AUTHOR:%s\n",author);
    printf("ISBN NUMBER:%d\n",isbn);
    printf("PRICE:%.2f\n",price);
    printf("PUBLISHER:%s\n",publisher);
    printf("PUBLICATION YEAR:%d\n",year);
    return 0;
}