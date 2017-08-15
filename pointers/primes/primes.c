#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    unsigned long long *pPrimes = NULL;
    unsigned long long trial=0;
    bool found = false;
    int total = 0;
    int count = 0;

    printf("How many primes would you like - you'll get at least 4? ");
    scanf("%d", &total);
    total = total < 4 ? 4 : total; 

    //allocate memory
    pPrimes = (unsigned long long*)malloc(total*sizeof(unsigned long long));
    if(!pPrimes)
    {
        printf("Not enough memory\n");
        return 1;
    }  

    *pPrimes = 2ULL;
    *(pPrimes + 1) = 3ULL;   //don't really need these, just to show how it works
    *(pPrimes + 2) = 5ULL;
    count = 3;              //number of primes stored
    trial = 5ULL;           //set to the most recent prime

    while(count < total)
    {
        trial += 2ULL;      //check this one next

        for(int i = 1; i < count; ++i)
        {
            if(!(found = (trial % *(pPrimes + i)))) //if the remainder is zero, exit the loop
              break;
        }
        
        if(found)                                   //if the remainder is not zero, you found a prime
          *(pPrimes + count++) = trial;
    }

    //print results
    for(int i = 0; i < total; ++i)
    {
        printf("%12llu", *(pPrimes + i));
        if(!((i+1) % 5))
            printf("\n");  //newline after every 5
    }
    printf("\n");           //newline for stragglers

    free(pPrimes);          //release the heap
    pPrimes = NULL;         //reset the pointer
    return 0;
}