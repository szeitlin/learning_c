#include <stdio.h>
int main(void)
{
    unsigned int number = 0;
    unsigned int rebmun = 0;
    unsigned int tmp = 0;

    printf("\nEnter a positive integer to reverse: ");
    scanf(" %u", &number);

    tmp = number;

    do
    {
        rebmun = 10*rebmun + tmp %10;   //add the rightmost digit
        tmp = tmp/10;                   //remove it from tmp
    } while(tmp);
    printf("\nThe number %u reverse is %u rebmun ehT\n", number, rebmun);
    return 0;

    }