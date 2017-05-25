#include <stdio.h>              // for several things, including fflush
#include <ctype.h>              //for toupper()
#include <stdbool.h>
#include <stdlib.h>             //for srand and rand
#include <time.h>
#include <unistd.h>             //for sleep()

int main(void)
{

    char another_game = 'Y';
    const unsigned int DELAY = 1;   //for multiplying clocks_per_sec to convert clock_ticks to seconds
    bool correct = true;
    unsigned int tries = 0;
    unsigned int digits = 0;        //how many digits in the current sequence
    time_t seed = 0;
    time_t wait_start = 0;          // stores current time
    unsigned int number = 0;        // stores an input digit
    clock_t start_time = 0;         // game start time in clock ticks
    unsigned int score = 0;

    // for fancy scoring, if we end up bothering with that
    //unsigned int total_digits = 0;  // how many digits entered in this round
    //unsigned int game_time = 0;     // in seconds



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
        start_time = clock();       // game start time

        //play game
        while(correct)
        {
            ++tries;
            wait_start = clock();           // record the start time for this sequence, in clock_ticks

            //create the sequence and display it to the player

            srand(time(&seed));             //initialize and store in seed
            for(unsigned int i = 1; i <= digits; ++i)
                printf("%d ", rand() % 10);

            fflush(stdout);

            for( ; clock() - wait_start < DELAY*CLOCKS_PER_SEC; );          //wait
            //sleep(DELAY);

            //hide the sequence from the player

            //go to beginning of the line
            printf("\r");

            for(unsigned int i = 1; i <= digits; ++i)
                printf("  ");                                               //two spaces

            // prompt the player to try to match the sequence
            if(tries == 1)
                printf("\nYour turn! Don't forget the spaces between the numbers!\n");
            else
                printf("\r");

            // compare to original
            srand(seed);                    //get the same sequence again
            for(unsigned int i=1; i <= digits; ++i)
            {
                scanf("%u", &number);
                if(number != rand() % 10)
                {
                    correct = false;
                    break;
                }
                else
                    correct = true;
                    ++score;
            }

            // optional: go back and do the overly complicated scoring like he has it

            // On every successful try, increase the sequence length
            if(correct)
                ++digits;

            //output score
            printf("%s\n", correct ? "Correct!" : "Wrong!");
            printf("Your score is %d\n", score);
        }

            // don't forget to clear the keyboard buffer!
            // this is important if any incorrect digits are entered, the loop exits and the leftovers remain

            fflush(stdin);

            //check if new game required
            printf("\n Do you want to play again (y/n)? ");

            scanf("%c", &another_game);

    } while(toupper(another_game) == 'Y');
      return 0;
}