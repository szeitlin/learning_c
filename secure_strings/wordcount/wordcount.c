#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_TEXT_LEN 10000
#define BUF_SIZE 100
#define MAX_WORDS 500
#define MAX_WORD_LEN 12

int main(void)
{
    char delimiters[] = " \n\".,;:!?()";
    char text[MAX_TEXT_LEN] = "";
    char buf[BUF_SIZE];
    char words[MAX_WORDS][MAX_WORD_LEN];
    int wordcount[MAX_WORDS] = {0};
    int total_words = 0;

    printf("enter text on an arbitrary number of lines");
    printf("\n enter an empty line to end input:\n");

    while(true)
    {
    fgets(buf, BUF_SIZE, stdin);
    if(buf[0] == '\n')
        break;

    if(strcat(text, buf))
        {
        printf("max capacity for text exceeded. the end!\n");
        return 1;
        }
     }

    return 0;


}