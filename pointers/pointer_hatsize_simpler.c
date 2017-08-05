
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    char size[3][12]= {
        {'6', '6', '6', '6', '7', '7', '7', '7', '7', '7', '7', '7'},
       {'1', '5', '3', '7', ' ', '1', '1', '3', '1', '5', '3', '7'},
       {'2', '8', '4', '8', ' ', '8', '4', '8', '2', '8', '4', '8'}
    };

    int headsize[12]={164,166,169,172,175,178,181,184,188,191,194,197}; //in 1/8 inch increments

    int *pheadsize = headsize;  // pointer corresponding to the headsize array

    float cranium = 0.0f;       //in decimal inches
    int your_head = 0;          // in eighths of inches
    bool hat_found = false;

    printf("\nEnter the circumference of your head above your eyebrows in inches as a decimal: ");

    scanf(" %f", &cranium);

    your_head = (int)(8.0f*cranium);

    unsigned int i = 0;
    if(your_head == *pheadsize)
        hat_found=true;
    else
        for (i=1; i < sizeof(headsize)/sizeof(*headsize); ++i)
        {
        if(your_head > *(pheadsize + i - 1) && your_head <= *(pheadsize +i))
        {
            hat_found = true; //use whatever i you're at in the next part
            break;
        }
    }

if(hat_found)
{
    printf("\nYour hat size is %c %c%c%c\n",
        size[0][i],                                
        size[1][i], 
        size[1][i]==' ' ? ' ': '/',
        size[2][i]); //3rd row
}
else
{
    if(your_head < *pheadsize)
        printf("\nYou are a pinhead (all hats are too large)\n");
    else
        printf("\nYou are a fathead (all hats are too small)\n");
}
    return 0;
}

