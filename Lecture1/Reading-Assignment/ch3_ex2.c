#include <stdio.h>
int main(void)
{
    // declares i as an integer and x as a float
    int i;
    float x;

    // assigns the value of i and x to 40 and 839.21f
    i = 40;
    x = 839.21f;

    // %d displays i in decimal form, %5d and %-5d displays within 5 spaces, %5.3d displays i within 5 spaces with minimum of 3 digits
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);

    // %10.3f displays x using 1O chars in 3 decimal places, %10.3e displays x in exponential form using 10 chars, %-10g displays x in either fixed decimal form or exponenlial form, using 10 characters 
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

    return 0;
}