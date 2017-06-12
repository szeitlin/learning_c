#include <string.h>
#include <stdio.h>

int main(void)
{
    char str1[] = "This string contains the holy grail";
    char str2[] = "the holy grail";
    char str3[] = "the holy grill";

    //search inside str1 for str2
    if(strstr(str1, str2))
        printf("\"%s\" was found in \"%s\"\n", str2, str1);
    else
        printf("\n\"%s\" was not found", str2);

    //search inside str1 for str3
    if(!strstr(str1, str3))
        printf("\"%s\" was not found\n", str3);
    else
        printf("\nWe shouldn't be here!");
    return 0;
}

