//#define __STDC_WANT_LIB_EXT1__ 1   //pretty sure this doesn't work here
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
    char delimiters[] = "\".,;:!?)(";
    char buf[100];      //buffer for a line of keyboard input
    char str[1000];     //store the input to be tokenized
    char* ptr = NULL;   //pointer used by strtok_s()
    str[0] = '\0';      //set first character to null (why?)

    size_t str_len = sizeof(str);
    size_t buf_len = sizeof(buf);
    printf("Enter some text that is less than %zd characters\n"
            "Terminate input by entering an empty line:\n", str_len);

    while(true)
    {
        if(!fgets(buf, buf_len, stdin)) //fgets takes 3 args: address of the input array, max number of chars to read, and input source
        {
            printf("error reading string\n");
            return 1;
        }
        if(!buf[0] == '\n')             //empty line ends input
            break;

        if(strcat(str, str_len, buf))
        {
            printf("max permitted input length exceeded\n");
            return 1;
        }
    }
    printf("you entered these words:\n", str);

    //the actual tokenizing step
    unsigned int word_count = 0;
    char * pWord = strtok(str, &str_len, delimiters, &ptr);
    if(pWord)
    {
        do
        {
            printf("%-18s", pWord);
            if(++word_count %5 == 0)
                printf("\n");
            pWord = strtok(NULL, &str_len, delimiters, &ptr);
        }while(pWord);
        printf("\n%u words found\n", word_count);

        }
        else
            printf("no words found\n");

        return 0;

}