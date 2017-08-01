//#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>

int main(void)
{
    int value = 0;
    int *pvalue = &value;

    printf("Input an integer: ");
    scanf(" %d", pvalue);

    printf("You entered %d\n", value);
    return 0;
}