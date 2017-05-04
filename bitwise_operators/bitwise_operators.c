#include <stdio.h>

int main(void)
{
    unsigned int original = 0xABC;
    unsigned int result = 0;
    unsigned int mask = 0xF;        //0000 0000 0000 1111

    printf("\n original = %X", original);

    //insert first digit in result
    result |= original & mask;      //put right 4 bits from original in result

    //second digit
    original >>= 4;                 // shift original right four positions
    result <<= 4;                   //make room for next digit (why do you have to do it this way?)
    result |= original&mask;        // put right 4 bits from original in result

    //third digit just do the same again, because we haven't done loops yet
    original >>= 4;                 // shift original right four positions
    result <<= 4;                   //make room for next digit (why do you have to do it this way?)
    result |= original&mask;        // put right 4 bits from original in result

    printf("\t result = %X\n", result);
    return 0;
}