#include <stdio.h>

int main(void)
{
    float number1 = 0.0;
    float number2 = 0.0;
    char operation = 0;             //+,-,*,/,%

    Calculate:
        printf("\nWhat would you like to calculate?\n");
        scanf("%f %c %f", &number1, &operation, &number2);

        switch(operation)
        {
            case '+':
                printf("= %0.2f\n", number1 + number2);
                break;

            case '-':
                printf("= %0.2f\n", number1 - number2);
                break;

            case '*':
                printf("= %0.2f\n", number1*number2);
                break;

            case '/':
                if(number2==0)
                    printf("\n\n\aCan't divide by zero!\n");
                else
                    printf("= %0.2f\n", number1/number2);
                break;

            case '%':
                if((int)number2==0)
                    printf("\n\n\aCan't divide by zero!\n");
                else
                    printf("= %d\n", (int)number1%(int)number2);
                break;

            default:
                printf("\n\n\aIllegal operation!\n");
                break;
        }

    char answer = 0;

    printf("\n Would you like to calculate another (y/n)?\n");
    scanf(" %c", &answer);

    switch(answer)
    {
        case 'y': case 'Y':
            goto Calculate;
            break;

        case 'n': case 'N':
            printf("Thanks and have a nice day! \n");
            break;

        default:
            printf("That wasn't one of the options. Please try again \n");
            break;
     }

        return 0;
    }