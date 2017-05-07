#include <stdio.h>

int main(void){

    int month = 0;
    int day = 0;
    int year = 0;

    printf("\nWhat month, day, year would you like to format?\n");
    scanf("%d %d %d", &month, &day, &year);


    switch(day)
    {
    case 1: case 21: case 31:
        printf("\n%dst", day);
        break;
    case 2: case 22:
        printf("\n%dnd", day);
        break;
    case 3: case 23:
        printf("\n%drd", day);
        break;
    default:
        if(0<day && day<=31)
            printf("\n%dth", day);
        else
            printf("Valid day numbers are greater than 0 and less than 32");
        break;
    }

    switch(month)
    {
    case 1:
        printf(" January %d\n", year);
        break;
    case 2:
        printf(" February %d\n", year);
        break;
    case 3:
        printf(" March %d\n", year);
        break;
    case 4:
        printf(" April %d\n", year);
        break;
    case 5:
        printf(" May %d\n", year);
        break;
    case 6:
        printf(" June %d\n", year);
        break;
    case 7:
        printf(" July %d\n", year);
        break;
    case 8:
        printf(" August %d\n", year);
        break;
    case 9:
        printf(" September %d\n", year);
        break;
    case 10:
        printf(" October %d\n", year);
        break;
    case 11:
        printf(" November %d\n", year);
        break;
    case 12:
        printf(" December %d\n", year);
        break;
    default:
        printf("Month must be between 1 and 12");
        break;
    }
    return 0;
}