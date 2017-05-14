#include <stdio.h>
#include <ctype.h> // for tolower()

int main(void)
{
    char answer = 'N';
    double total = 0.0;
    double value = 0.0;
    unsigned int count=0;

    printf("\nThis program calculates the average of "
                "any number of values");

    for( ;; )       //indefinite loop, goes until break
    {
        printf("\nEnter a value: ");
        scanf(" %lf", &value);
        total += value;
        printf("total: %lf \n", total);
        ++count;
        printf("count: %u \n", count);

        printf("\nDo you want to enter another value? (Y or N): ");
        scanf(" %c", &answer);

        if(tolower(answer) == 'n')
            break;
        }
        printf("\nThe average is %.2lf\n", total/count);
        return 0;

}

/*note to self, before adding the print statements for debugging the total and count values,
I had entered 44, 43, 42 and got back '33.00' as the average.
Here's the bug: if you enter a number instead of Y/N, the total increments incorrectly,
and the count keeps going up.*/