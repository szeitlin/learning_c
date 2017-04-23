#include <stdio.h>

//best practice is to avoid floating-point math with money because of rounding errors, so use cents instead of dollars

int main(void)
{
    const long unit_price = 350L;
    int quantity=0;
    long discount = 0L;
    printf("Enter the number that you want to buy:");
    scanf(" %d", &quantity);

    if(quantity>10)
        discount = 5L;

    long total_price = quantity*unit_price*(100-discount)/100;
    long dollars = total_price/100;
    long cents = total_price%100;
    printf("the price for %d is $%ld.%ld\n", quantity, dollars, cents);
    return 0;
}