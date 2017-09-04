#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define CAP_INCR 10     //memory increment

int main(void)
{
    unsigned long long *pPrimes = NULL;
    unsigned long long limit=0LL; //upper limit
    bool found = false;
    int count = 0;

    printf("Enter the upper limit for primes you want to find (up to this number): ");
    scanf("%llu", &limit);

    //allocate memory
    size_t capacity = 10;
    pPrimes = calloc(capacity, sizeof(unsigned long long));
    if(!pPrimes)
    {
        printf("Not enough memory\n");
        return 1;
    }  

    //hard-code the first three
    *pPrimes = 2ULL;
    *(pPrimes + 1) = 3ULL;   //don't really need these, just to show how it works
    *(pPrimes + 2) = 5ULL;
    count = 3;              //number of primes stored

    unsigned long long trial = *(pPrimes + 2) + 2ULL;
    unsigned long long *pTemp = NULL;                //temporary pointer store

    while(trial <= limit)
    {
        for(int i = 1; i < count; ++i)
        {
            if(!(found = (trial % *(pPrimes + i)))) //if the remainder is zero, exit the loop
              break;
        }
        
        if(found)                                   //if the remainder is not zero, you found a prime
          {
              if(count == capacity)
              {//we need more memory
                capacity += CAP_INCR;
                pTemp = realloc(pPrimes, capacity*sizeof(unsigned long long));
                if(!pTemp)
                {
                    printf("memory allocation failed \n");
                    free(pPrimes);
                    pPrimes = NULL;
                    return 2;
                }
                pPrimes = pTemp;
            }
            *(pPrimes + count++) = trial;
          }
          trial += 2ULL;
    }

    //print results
    printf("%d primes found up to %llu:\n", count, limit);
    for(int i = 0; i < count; ++i)
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