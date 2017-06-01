#include <stdio.h>

int main(void)
{
#if defined __STDC_LIB_EXT1__
    printf("C11 supported optional functions are defined\n");
#else
    printf("optional functions are NOT defined\n");
#endif
    return 0;
}