#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));      //use clock value as starting seed
    int limit = 20;
    int chosen = 0;
    chosen = 1 + rand() % limit;        //1 to limit inclusive
    int guess = 0;
    int count = 3;

    printf("\nThis is a guessing game");
    printf("\nI have chosen a number between 1 and 20.\n");

    for (; count>0; --count)
    {
        printf("\nYou have %d tr%s left", count, count ==1 ? "y":"ies");
        printf("\nGuess!");
        scanf("%d", &guess);

        if(guess==chosen)
        {
            printf("\nCongrats! You win!\n");
            return 0;
        }
        else if(guess<1 || guess>20)
            printf("It's been 2 and 20\n");
        else
            printf("Sorry, %d is wrong. My number is %s than that\n",
                    guess, chosen > guess? "greater":"less");
    }
    printf("\nYou didn't guess in 3 tries. The number was %d\n", chosen);
    return 0;
}