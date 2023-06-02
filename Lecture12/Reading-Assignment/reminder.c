#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50 // max number of reminders
#define MSG_LEN 60 // max length of reminder message

int read_line(char str[], int n);

int main(void){
    char reminders[MAX_REMIND][MSG_LEN+3]; // reminders array with row = number of reminders and col = message length
    char day_str[3], msg_str[MSG_LEN+1]; // array of dates; array of messages
    int day, i, j, num_remind = 0;

    for (;;){
        if (num_remind == MAX_REMIND){ // if number of reminders reached 50
            printf("--No Space left --\n");
            break; // break
        }
        printf("Enter day and reminder: "); // prompts user to input the day and reminder
        scanf("%2d", &day); //scans the first 2 digit of the input and stores in variable day
        if (day == 0){ // if day = 0, break
            break;
        }
        sprintf(day_str, "%2d", day); // converts the day integer to a string with width 2 and stores in day_str
        read_line(msg_str, MSG_LEN); // reads a line of input and stores in msg_str

        for (i = 0; i < num_remind; i++)
            if (strcmp(day_str, reminders[i]) < 0) // reminder date is arranged in ascending order
                break;

        for (j = num_remind; j > i; j--) // initializes in a backward manner until index i is reached;
            strcpy(reminders[j], reminders[j-1]);

        strcpy(reminders[i], day_str); // copies day_str to reminders[i]
        strcat(reminders[i], msg_str); // appends msg_str to reminders[i]

        num_remind++;
    }

    printf("\n Day Reminder\n");
    for (i = 0; i < num_remind; i++)
        printf(" %s\n", reminders[i]);
    return 0;
}

int read_line(char str[], int n){
    int ch, i = 0;

    while ((ch = getchar()) != '\n') // reads characters until a newline character is encountered
        if (i < n) // checks if the length of str is less than n or messages input
            str[i++] = ch; // stores the character in str or array of messages and increments i
    str[i] = '\0'; // appends null character at the end of str to terminate the string
    return i; // returns the number of characters read
}
