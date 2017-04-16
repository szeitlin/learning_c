#include <stdio.h>

int main(void)
{
    printf("variables of type char occupy %lu bytes\n", sizeof(char));
    printf("variables of type short occupy %lu bytes\n", sizeof(short));
    printf("variables of type int occupy %lu bytes\n", sizeof(int));
    printf("variables of type long occupy %lu bytes\n", sizeof(long));
    printf("variables of type float occupy %lu bytes\n", sizeof(float));
    printf("variables of type double occupy %lu bytes\n", sizeof(double));
    return 0;
}