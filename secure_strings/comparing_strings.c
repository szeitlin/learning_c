#define __STDC_WANT_LIB_EXT1__ 1        //this doesn't work, strncpy and strncat don't work the same way as strncopy_s and strncat_s
#include <string.h>
#include <stdio.h>

#define MAX_LENGTH 21

int main(void)
{
    char word1[MAX_LENGTH];
    char word2[MAX_LENGTH];

    printf("Type in the first word (maximum %d characters): ", MAX_LENGTH - 1);
    int retval = scanf("%s", word1); // for scanf_s, include sizeof(word1));

    if(EOF == retval)
    {
    printf("Error reading the word \n");
    return 1;
    }

    printf("Type in the second word (maximum %d characters):", MAX_LENGTH - 1);
    retval = scanf("%s", word2); //sizeof(word2));

    if(EOF == retval)
    {
    printf("Error reading the word \n");
    return 2;
    }

    if(strcmp(word1, word2) == 0)
        printf("They're the same word!");
    else
        printf("%s precedes %s\n",
                    (strcmp(word1, word2) < 0) ? word1 : word2,
                    (strcmp(word1, word2) < 0) ? word2 : word1
               );
    return 0;
}

