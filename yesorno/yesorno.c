#include <stdio.h>

int main(void)
{
    char answer = 0;

    printf("enter yes (Y) or no (N): ");
    scanf(" %c", &answer);

    switch(answer)
    {
        case 'y': case 'Y':
            printf("You responded in the affirmative \n");
            break;

        case 'n': case 'N':
            printf("You responded negatively \n");
            break;

        default:
            printf("That wasn't one of the options. Please try again \n");
            break;
     }
     return 0;
}