#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void scan_word(int *occurrences);
bool is_anagram(int *occurrences1, int *occurrences2);

int main(void) {
    int occurrences1[26] = {0}; // empty array for first word
    int occurrences2[26] = {0}; // empty array for second word

    printf("Enter first word: "); // prompts user to enter first word
    scan_word(occurrences1); // calls function and scans the array of first word

    printf("Enter second word: "); // prompts user to enter the second word
    scan_word(occurrences2); // calls function and scans array of second word

    if (is_anagram(occurrences1, occurrences2)) { // accepts the 2 arrays of first and second word
        printf("The words are anagrams.\n"); // if true, it is an anagram
    } else {
        printf("The words are not anagrams.\n"); // if false, not an anagram
    }

    return 0;
}

void scan_word(int *occurrences) { // accepts array as the parameter
    char c;
    while ((c = getchar()) != '\n') { // checks each character until a newline character is encountered
        if (isalpha(c)) { // checks if character is alphabetic character
            *(occurrences + (toupper(c) - 'A')) += 1; // takes the index of the char in the array; increments the count for each char in the word
        }
    }
}

bool is_anagram(int *occurrences1, int *occurrences2) { // accepts 2 arrays as parameter
    for (int i = 0; i < 26; i++) { // loop for each element of the arrays
        if (*(occurrences1 + i) != *(occurrences2 + i)) { // if the count for each index are NOT the same for both arrays, they are not anagrams
            return false;
        }
    }
    return true;
}
