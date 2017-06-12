#define __STDC_WANT_LIB_EXT1__ 1        //this doesn't work, strncpy and strncat don't work the same way as strncopy_s and strncat_s
#include <string.h>
#include <stdio.h>

int main(void)
{
  char preamble[] = "The joke is: \n\n";
  char strArray[][40] = {
                    "My dog has no nose.\n",
                    "How does your dog smell, then?\n",
                    "My dogs smells bad.\n"
                    };

  unsigned int strCount = sizeof(strArray)/sizeof(strArray[0]);

  //find the total length of all the strings in the strArray
  unsigned int length = 0;
  for(unsigned int i = 0; i <strCount; ++i)
    length += strnlen(strArray[i], sizeof(strArray[i]));

  //create array to hold the concatenated strings together
  char joke[length + strnlen(preamble, sizeof(preamble)) + 1];

  if(strncpy(joke, sizeof(joke), preamble))
  {
    printf("Error copying preamble to joke\n");
    return 1;
  }

  //concatenate
  for(unsigned int i = 0; i <strCount; ++i)
  {
    if(strncat(joke, sizeof(joke), strArray[i], sizeof(strArray[i])))
    {
        printf("Error copying string strArray[%u].", i);
        return 2;
    }

  }

  printf("%s", joke);
  return 0;

}

