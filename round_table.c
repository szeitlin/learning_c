#include <stdio.h>
//#define Pi 3.14159265f  //note there's no equals sign when it's a constant, but still have to put f on the end

int main(void)
{
    float radius = 0.0f;
    float diameter = 0.0f;
    float circumference = 0.0f;
    float area = 0.0f;
    const float Pi = 3.14159f; //doing it this way means the compiler will make sure it stays constant

    printf("Input the diameter of the table:");
    scanf("%f", &diameter);  // takes input from the keyboard and save it as the diameter value

    radius = diameter/2.0f;
    circumference = 2.0f*Pi*radius;
    area = Pi*radius*radius;

    printf("\nThe circumference is %0.2f", circumference);
    printf("\nThe area is %.2f\n", area);
    return 0;
}


