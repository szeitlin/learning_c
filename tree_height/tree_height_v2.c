#include <stdio.h>

//use the height of two people to estimate the height of a tree

//why is he making these longs?

int main(void)
{
    long shorty = 0L;                           //height in inches
    long lofty = 0L;
    long feet = 0L;                             //clunky way of doing this to simplify input
    long inches = 0L;
    const int inches_per_foot = 12;

    long shorty_to_lofty = 0L;
    long lofty_to_tree = 0L;
    float tree_height = 0.0f;

    printf("Input shorty's height in whole feet:");
    scanf("%ld", &feet);
    printf("Input inches:");
    scanf("%ld", &inches);
    shorty = feet*inches_per_foot + inches;

    printf("Input lofty's height in whole feet:");
    scanf("%ld", &feet);
    printf("Input inches:");
    scanf("%ld", &inches);
    lofty = feet*inches_per_foot + inches;

    printf("Input the distance between shorty & lofty in whole feet:");
    scanf("%ld", &feet);
    printf("Input inches:");
    scanf("%ld", &inches);
    shorty_to_lofty = feet*inches_per_foot + inches;

    printf("Input the distance between lofty & the tree, to the nearest foot:");
    scanf("%ld", &feet);
    lofty_to_tree = feet*inches_per_foot;

    tree_height = shorty + (shorty_to_lofty + lofty_to_tree)*(lofty - shorty)/shorty_to_lofty;       //this gives you inches

    printf("\nThe tree height is approximately %.2f feet and %d inches\n",
                tree_height/inches_per_foot, (int)tree_height% inches_per_foot);
    return 0;
}