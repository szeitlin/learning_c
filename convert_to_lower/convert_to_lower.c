#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char letter = 0;
    printf("Enter an uppercase letter to be converted to lowercase:");
    scanf("%c", &letter);
  if(isupper(letter)) //isalpha(letter) && not sure why you would need the isalpha check? does isupper work on numerics?
    printf("You entered an uppercase %c.\n", tolower(letter));
  else
    printf("You did not enter an uppercase letter!\n");
  return 0;
}