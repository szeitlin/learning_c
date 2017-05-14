#include <stdio.h>

int main(void){

    int total=0;
    int count = 2;

    printf("this is prefix incrementing:\n");

    total = 2 + (++count);
    printf("count: %d, total: %d\n", count, total);

    total = 0;
    printf("\nthis is postfix incrementing\n");

    total = 2 + count++;
    printf("count: %d, total: %d\n", count, total);
}
