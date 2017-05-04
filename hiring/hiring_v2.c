#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int age = 0;
    int college = 0;        //code for college attended
    int major = 0;
    bool interview = false;

    printf("\nWhat college? 1 for Harvard, 2 for Yale, 3 for other: ");
    scanf("%d", &college);

    printf("\nWhat major? 1 for Chemistry, 2 for economics, 3 for other: ");
    scanf("%d", &major);

    printf("\nAge?");
    scanf("%d", &age);

    interview = (age>25 && major==1 && college!=2) ||
                (college==2 && major==1) ||
                (college==1 && major==2 && age<=28) ||
                (college==2 && age>25 && major!=1);

    if(interview)
        printf("\n\nSchedule an onsite!\n");
    else
        printf("\n\nRejected!\n");
    return 0;
}