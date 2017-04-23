#include <stdio.h>

int main(void)
{
    const double unit_price = 3.5;
    int quantity=0;
    float discount = 0.0;
    printf("Enter the number that you want to buy:");
    scanf(" %d", &quantity);

    if(quantity>10)
        discount = 0.05;

    printf("the price for %d is $%.2f\n", quantity, quantity*unit_price*(1.0-discount));
    return 0;
}