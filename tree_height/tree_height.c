#include <stdio.h>

//use the height of two people to estimate the height of a tree

int main(void)
{
    float shorty = 0.0f;
    float lofty = 0.0f;
    float shorty_to_lofty = 0.0f;
    float lofty_to_tree = 0.0f;
    float tree_height = 0.0f;

    printf("Input shorty's height:");
    scanf("%f", &shorty);

    printf("Input lofty's height:");
    scanf("%f", &lofty);

    printf("Input the distance between shorty & lofty:");
    scanf("%f", &shorty_to_lofty);

    printf("Input the distance between lofty & the tree:");
    scanf("%f", &lofty_to_tree);

    tree_height = (shorty_to_lofty + lofty_to_tree)*(lofty - shorty)/shorty_to_lofty;
    printf("\nThe tree height is %0.2f\n", tree_height);
    return 0;
}