#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

int main(int argc, char *argv[]) {
    char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};

    int i, j;

    // loop through  command line arguments
    for (i = 1; i < argc; i++) {
        // loop through  planets array
        for (j = 0; j < NUM_PLANETS; j++) {
            // compare command line argument with the current planet
            if (strcmp(argv[i], planets[j]) == 0) {
                // if match is found, print the planet and its position
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }
        }
        // the argument is not a planet
        if (j == NUM_PLANETS) {
            printf("%s is not a planet\n", argv[i]);
        }
    }

    return 0;
}
