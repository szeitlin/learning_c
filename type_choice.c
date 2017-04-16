#include <stdio.h>

int main(void)
{
    const float Revenue_per_150 = 4.5f;
    unsigned short JanSold = 23500;
    unsigned short FebSold = 19300;
    unsigned short MarSold = 21600;
    float RevQuarter = 0.0f;

    //short QuarterSold = JanSold + FebSold + MarSold;  //this error produces a negative number as output!
    unsigned long QuarterSold = JanSold + FebSold + MarSold;

    printf("Stock sold in\n Jan: %d\n Feb: %d\n Mar: %d\n", JanSold, FebSold, MarSold);
    printf("Total sold: %lu\n", QuarterSold);

    //RevQuarter = QuarterSold/150.0*Revenue_per_150; //avoid rounding error by making this a float
    RevQuarter = (float)QuarterSold/150.0*Revenue_per_150;  //explicit type conversion is better than implicit

    printf("revenue this quarter is:$%.2f\n", RevQuarter);
    return 0;
}