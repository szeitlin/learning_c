#include <time.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
    srand(time(NULL)); //initialize RNG seed
    printf("%i\n", rand());  //pick one
}