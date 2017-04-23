#include <stdio.h>

int main(void)
{
    const double unit_price = 3.5;
    int quantity=0;
    printf("Enter the number that you want to buy:");
    scanf(" %d", &quantity);

    double total = 0.0;
    if(quantity>10)
        total = quantity*unit_price*0.95;
    else
        total = quantity*unit_price;
    printf("the price for %d is $%.2f\n", quantity, total);
    return 0;
}