#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    printf("variables of type char store values from %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("variables of type int store values from %d to %d\n", INT_MIN, INT_MAX);
    return 0;
}