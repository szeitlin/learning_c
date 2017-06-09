#define __STDC_WANT_LIB_EXT1__ 1        //make optional versions of functions available
#include <string.h>
#include <stdio.h>

int main(void)
{
  char strArray[][70] = {
                "Computers do what you tell them to do, not what you want them to do.",
                "When you put something in memory, remember where you put it.",
                "Never test for a condition you don't know what to do with.",
                };
  unsigned int stringLength = 0;
  unsigned int strCount = sizeof(strArray)/sizeof(strArray[0]);

  for(unsigned int i = 0; i < strCount; ++i)
  {
    stringLength = 0;
    while (strArray[i][stringLength])
      ++stringLength;

    printf("The string:\n   \"%s\"\n contains %u characters.\n", strArray[i], stringLength);
  }
return 0;
}

//for(unsigned int i=0; i <strCount; ++i)
//    {
//    printf("The string:\n   \"%s\"\n ontains %zu characters. \n",
//            str[i], strnlen_s(str[i], sizeof(str[i])));

//    }