#include <stdio.h>
#include <math.h>

int main(void) {

    //prompts user for input
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("n\t2^n\n");

    for (int i = 0; i <= n; i++) {
        // uses pow function to calculate 2^n 
        int power = (int) pow(2, i);
        printf("%d\t%d\n", i, power);
    }
    return 0;
}
