#include <stdio.h>
#include <limits.h>             // for LONG_MAX

int main(void)
{
    long candidate = 0L;       // integer to be checked for whether it's even

    printf("Enter an integer less than %ld:", LONG_MAX);
    scanf(" %ld", &candidate);

    if(candidate % 2L == 0L)
    {
        printf("The number %ld is even\n", candidate);

        //check whether half the number is also even
        if((candidate/2L) % 2L == 0L)
        {
            printf("\nHalf of %ld is %ld, which is also even.\n", candidate, (candidate/2L));
            printf("\nThis is a dumb excuse to practice nested if statements\n");
        }
        else
            printf("\nHalf of %ld is odd.\n", candidate);
            return 0;
    }

    else
        printf("The number %ld is odd\n", candidate);
    return 0;
}
    