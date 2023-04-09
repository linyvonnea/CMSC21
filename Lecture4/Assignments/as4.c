#include <stdio.h>

int main() {
    int power = 1;
    int exponent;

    printf("Enter the exponent for 2: ");
    scanf("%d", &exponent);

    for(int i = 0; i < exponent; i++) {
        power *= 2;
    }

    printf("2 to the power of %d is %d", exponent, power);
    
    return 0;
}
