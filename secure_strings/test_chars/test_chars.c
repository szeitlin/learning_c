#define _XOPEN_SOURCE 700
#include <stdio.h>
#include <ctype.h>
#define BUF_SIZE 100

int main(void)
{
    char buf[BUF_SIZE];
    int nLetters = 0;
    int nDigits = 0;
    int nPunct = 0;

    printf("Enter a string of less than %d characters:\n", BUF_SIZE);
    if(!gets(buf)) //, sizeof(buf)))
    {
        printf("error reading string \n");
        return 1;
    }
    size_t i=0;
    while(buf[i])
    {
        if(isalpha(buf[i]))
            ++nLetters;
        else if(isdigit(buf[i]))
            ++nDigits;
        else if(ispunct(buf[i]))
            ++nPunct;
        ++i;
    }
    printf("\nYour string contained %d letters, %d digits and %d punctuation characters\n",
                                                nLetters, nDigits, nPunct);
    return 0;
}
