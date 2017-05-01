#include <stdio.h>

int main(void)
{
    int choice = 0;

    printf("Pick a number between 1 and 10 to win a prize! ");
    scanf("%d", &choice);

    if((choice>10) || (choice < 1))
        choice = 11;

    switch(choice)
    {
        case 7:
        printf("You win the collected works of Amos Gruntfuttock!\n");
        break;

        case 2:
        printf("you win the folding thermometer-pen-watch-umbrella\n");
        break;

        case 8:
        printf("you win a lifetime supply of aspirin\n");
        break;

        case 11:
        printf("you wasted your guess!\n");

        default:
        printf("you lose!\n");
        break;
     }
     return 0;
}