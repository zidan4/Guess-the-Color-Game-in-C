#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void displayColors() {
    printf("Available colors:\n");
    printf("1. Red\n");
    printf("2. Blue\n");
    printf("3. Green\n");
    printf("4. Yellow\n");
    printf("5. Orange\n");
    printf("6. Purple\n");
}

int main() {
    const char *colors[] = {"Red", "Blue", "Green", "Yellow", "Orange", "Purple"};
    int numColors = sizeof(colors) / sizeof(colors[0]);

    srand(time(0)); // Seed the random number generator
    int randomIndex = rand() % numColors; // Pick a random index
    const char *chosenColor = colors[randomIndex];

    char userGuess[50];
    int attempts = 0;

    printf("Welcome to the 'Guess the Color' game!\n\n");

    displayColors();

    while (1) {
        printf("\nEnter your guess: ");
        scanf("%s", userGuess);

        attempts++;

        if (strcasecmp(userGuess, chosenColor) == 0) {
            printf("\nCongratulations! You guessed the correct color '%s' in %d attempts!\n", chosenColor, attempts);
            break;
        } else {
            printf("Wrong guess! Try again.\n");
        }
    }

    return 0;
}

