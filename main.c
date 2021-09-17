#include <stdio.h>

int main()
{
    float money, discount, rebate;
    printf("Enter the purchased price: ");
    scanf("%f",&money);
    if(money < 30)
    {
        printf("No Discound\n");
        printf("No Rebate earned\n");
        printf("Final price : RM %.2f", money);
    }
    if(money >= 30 && money < 60)
    {
        discount = money * ((float)5 / (float)100);
        printf("Discount 5%% \n");
        printf("Discount Price: %.2f", discount );
        printf("\nNo Rebate earned\n");
        printf("Final Price: %.2f", money - discount);
    }
    if(money >= 60 && money < 100)
    {
        discount = money * ((float)10 / (float)100);
        rebate = 10;
        printf("Discount 10%% \n");
        printf("Discount Price: %.2f", discount );
        printf("\nRebate earned: %.2f", rebate);
        printf("\nFinal Price: %.2f", money - discount - rebate);
    }
    if(money >= 100)
    {
        discount = money * ((float)20 / (float)100);
        rebate = 15;
        printf("Discount 20%% \n");
        printf("Discount Price: %.2f", discount );
        printf("\nRebate earned: %.2f", rebate);
        printf("\nFinal Price: %.2f", money - discount - rebate);
    }
    return 0;
}