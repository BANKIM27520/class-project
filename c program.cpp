#include<stdio.h>
int main()
{
    char name[50];
    printf("ENTER THE PRODUCT NAME:");
    scanf("%s",name);
    int id;
    printf("ENTER THE PRODUCT ID:");
    scanf("%d",&id);
    int quantity;
    printf("ENTER THE PRODUCT QUANTITY:");
    scanf("%d",&quantity);
    float price;
    printf("ENTER THE PRODUCT PRICE:");
    scanf("%f",&price);
    char manufac[50];
    printf("ENTER THE PRODUCT MANUFACTURER NAME:");
    scanf("%s",manufac);
    char category[50];
    printf("ENTER THE PRODUCT CATEGORY:");
    scanf("%s",category);
    printf("PRODUCT DETAILS:\n");
    printf("NAME:%s\n",name);
    printf("ID:%d\n",id);
    printf("QUANTITY:%d\n",quantity);
    printf("PRICE:%.2f\n",price);
    printf("MANUFACTURER NAME:%s\n",manufac);
}