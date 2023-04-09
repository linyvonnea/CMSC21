#include <stdio.h>
int main(void)
{
    int days, start, i, j;

    // prompts user to enter the day and validates it
    do{
        printf("\nEnter number of days in month: ");
        scanf("%d", &days);
        if (days <=27 || days >= 32)
            printf ("Error: Invalid number of days! Please try again.\n");
    } while (days <=27 || days >= 32);

     // // prompts user to enter the starting day and validates it
    do{
        printf("\nEnter starting day of the week (1=Sun, 7=Sat): ");
        scanf("%d", &start);
        if (start < 0 || start > 7)
            printf ("Error: Invalid input! Please try again.\n");
    } while (start < 0 || start > 7);


    // prints calendar header
    printf("\n\n   S   M   T   W   TH   F  S\n\n");
    
    // prints spaces before the starting day
    for (i = 1; i < start; i++) { 
        printf("    ");
    }

    // prints the days of the month
    for (j = 1; j <= days; i++, j++) {
        printf("%4d", j);

        // checks if i is the last day of the week
        if (i % 7 == 0)
            printf("\n");
    }
    printf ("\n\n");
    return 0;
}