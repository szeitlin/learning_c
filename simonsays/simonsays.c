#include <stdio.h>
#include <ctype.h>              //for toupper()
#include <stdbool.h>
#include <stdlib.h>             //for srand and rand
#include <time.h>

int main(void)
{

    char another_game = 'Y';
    const unsigned int DELAY = 1;
    bool correct = true;
    unsigned int tries = 0;
    unsigned int digits = 0;        //how many digits in a sequence
    time_t seed = 0;
    unsigned int number = 0;        // stores an input digit


    printf("\nWatch carefully as the digits are only displayed for %u second%s ", DELAY, DELAY>1 ? "s!" : "!");
    printf("\nThen the numbers disappear and you have to enter the same sequence");
    printf("\n You must put spaces between the digits.\n");
    printf("\nGood luck! \n Press Enter to play\n");
    scanf("%c", &another_game);

    do
    {
        correct = true;
        tries = 0;
        digits = 2;

        //play game
        while(correct)
        {
        ++tries;

        //create the sequence
        srand(time(&seed));             //initialize and store in seed
        for(unsigned int i = 1; i <= digits; ++i)
            printf("%d ", rand() % 10);
        }

        //wait one second

        //get the player's attempt

        // compare to original
        
        //output score

        //check if new game required
        printf("\n Do you want to play again (y/n)? ");
        scanf("%c", &another_game);
    } while(toupper(another_game) == 'Y');

      return 0;
}