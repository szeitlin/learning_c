#define __STDC_WANT_LIB_EXT1__ 1        //this doesn't work, there's no strnlen_s to be had here
#include <string.h>
#include <stdio.h>

int main(void)
{
  char strArray[][70] = {
                "Computers do what you tell them to do, not what you want them to do.",
                "When you put something in memory, remember where you put it.",
                "Never test for a condition you don't know what to do with.",
                };
  //unsigned int stringLength = 0;
  unsigned int strCount = sizeof(strArray)/sizeof(strArray[0]);

  for(unsigned int i=0; i <strCount; ++i)
    {
    printf("The string:\n   \"%s\"\n contains %zu characters. \n",
            strArray[i], strnlen(strArray[i], sizeof(strArray[i]))); //strnlen 2nd arg says 'walk at most this far'
    }
return 0;
}

