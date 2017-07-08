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
    char text[MAX_TEXT_LEN] = "";    //text array
    char buf[BUF_SIZE];              //text array
    char words[MAX_WORDS][MAX_WORD_LEN]; //array of text arrays
    int wordcount[MAX_WORDS] = {0};     // array of ints
    int total_words = 0;

    printf("enter text on an arbitrary number of lines");
    printf("\n enter an empty line to end input:\n");

    while(true)
    {
        fgets(buf, BUF_SIZE, stdin);
        if(buf[0] == '\n')
            break;

        if(strlcat(text, buf, sizeof(text)) >= sizeof(text)) // try strlcat instead, return value is the str length
        {
            printf("max capacity for text exceeded. the end!\n");
            return 1;
        }
     }

     //Find a word
     //size_t len = MAX_TEXT_LEN; // don't need this without secure methods
     char *ptr = NULL;
     char* pWord = strtok_r(text, delimiters, &ptr);
     if(!pWord)
     {
         printf("No words found, ending program\n");
         return 1;
     }
     strcpy(words[total_words], pWord);
     ++wordcount[total_words++];

     //Find the rest of the words
     bool new_word = true;
     while(true)
     {
         pWord = strtok_r(NULL, delimiters, &ptr);
         if(!pWord)
            break;

         //check if we already have this word
         for(int i=0; i<total_words; ++i)
         {
             if(strcmp(words[i], pWord)==0)
             {
                ++wordcount[i];
                new_word=false;
             }
         }

     if(new_word)
     {
         strcpy(words[total_words], pWord); //insecure version doesn't take the length as a limit
         ++wordcount[total_words++];
     }
     else
      new_word=true;
    
    if(total_words > MAX_WORDS - 1)
    {
        printf("Will not store any more words \n");
        return 1;
    }
}
    //Return the list of words
    for(int i=0; i < total_words; ++i)
    {
        printf(" %-13s %3d", words[i], wordcount[i]);
        if((i + 1)%4 == 0)
            printf("\n");
    }
    printf("\n");
    return 0;
}
