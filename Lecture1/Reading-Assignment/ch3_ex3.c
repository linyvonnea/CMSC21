# include <stdio.h>

int main (void)
{
    // declares the variables as integers
    int num1, denom1, num2, denom2, result_num, result_denom;

    // displays and asks users to enter the first fraction 
    printf("Enter first fraction: ");
    // prompts users for an input in integer and stores the numerator in the variable called num1 and denominator in denom1
    scanf("%d/%d", &num1, &denom1);

    // displays and asks users to enter the first fraction 
    printf("Enter second fraction:  ");

     // prompts users for an input in integer and stores the numerator in the variable called num2 and denominator called denom2
    scanf("%d/%d", &num2, &denom2);

    // finds the LCM of denominators and rationalizes them through multiplication (*) and adds the numerators (+)
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    // prints the results in decimal form
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;

}