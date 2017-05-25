#include <stdio.h>

int main(void)
{
    unsigned long sum = 0UL;
    unsigned int i = 1;
    unsigned int count = 0;

    printf("\nEnter the number of integers you want to sum: ");
    scanf(" %u", &count);

    while(i <= count)
        sum += i++;

    printf("Total of the first %u numbers is %lu\n", count, sum);
    return 0;
}