#include<stdio.h>
int main()
{
    char brand[100];
    printf("ENTER THE MOBILE BRAND:");
    scanf("%s",brand);
    char model[100];
    printf("ENTER THE MOBILE MODEL:");
    scanf("%s",model);
    int imei;
    printf("ENTER THE IMEI NUMBER:");
    scanf("%d",&imei);
    float price;
    printf("ENTER THE MOBILE PRICE:");
    scanf("%f",&price);
    char colour[50];
    printf("ENTER THE COLOUR:");
    scanf("%s",colour);
    int battery;
    printf("ENTER THE BATTERY CAPACITY:");
    scanf("%d",&battery);
    printf("MOBILE DETAILS:\n");
    printf("BRAND:%s\n",brand);
    printf("MODEL:%s\n",model);
    printf("IMEI NUMBER:%d\n",imei);
    printf("PRICE:%.2f\n",price);
    printf("COLOUR:%s\n",colour);
    printf("BATTERY CAPACITY:%d\n",battery);
    return 0;
}