#include <stdio.h>

int main(void)
{
  const float unit_price = 3.50;
  const float discount1 = 0.05;     //discount for >10
  const float discount2 = 0.1;      //discount for >20
  const float discount3 = 0.15;     //discount for >50
  float total_price = 0.0;
  int quantity = 0;

  printf("Enter the number that you want to buy:");
  scanf(" %d", &quantity);

  total_price = quantity*unit_price*(1.0 -
                    (quantity > 50 ? discount3: (
                        quantity > 20 ? discount2: (
                            quantity > 20? discount1: 0.0))));
  printf("The price for %d is $%.2f\n", quantity, total_price);
  return 0;
  }