#include<stdio.h>
void deposit()
{
    float amount;
    printf("ENTER THE AMOUNT TO DEPOSIT: ");
    scanf("%f",&amount);
    printf("AMOUNT %.2f DEPOSITED SUCCESSFULLY.\n",amount);
}
void withdraw()
{
    float amount;
    printf("ENTER THE AMOUNT TO WITHDRAW:");
    scanf("%f",&amount);
    printf("AMOUNT %.2f WITHDRAWN SUCCESSFULLY.\n",amount);
}
void check_balance()
{
    float balance=10000.00; // Example balance
    printf("YOUR CURRENT BALANCE IS: %.2f\n",balance);
}
int main()
{
    int choice;
    printf("BANKING SYSTEM MENU:\n");
    printf("1. DEPOSIT\n");
    printf("2. WITHDRAW\n");
    printf("3. CHECK BALANCE\n");
    printf("ENTER YOUR CHOICE (1-3): ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            deposit();
            break;
        case 2:
            withdraw();
            break;
        case 3:
            check_balance();
            break;
        default:
            printf("INVALID CHOICE.\n");
    }
    return 0;
}