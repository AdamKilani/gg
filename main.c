#include <stdio.h>
#include <stdbool.h>
#include "mastermind.h"
#include "color.h"

int main() {
    enum Color secretCode[CODE_LENGTH];
    enum Color guess[CODE_LENGTH];
    int blackPins, whitePins, attempts = 0;

    // Generate secret code
    generateSecretCode(secretCode);

    // Game loop
    while (attempts < MAX_GUESSES) {
        printf("Attempt %d/%d\n", attempts + 1, MAX_GUESSES);
        printf("Enter your guess (e.g., RYGB): ");

        // Input guess from user
        char input[CODE_LENGTH + 1]; // +1 for null terminator
        scanf("%s", input);

        // Convert user input to enum Color guess[]
        for (int i = 0; i < CODE_LENGTH; i++) {
            guess[i] = charToColor(input[i]);
        }

        // Check if guess is valid
        if (!validateGuess(guess)) {
            printf("Invalid guess. Please enter a valid combination of colors.\n");
            continue;
        }

        // Check guess against secret code
        checkGuess(secretCode, guess, &blackPins, &whitePins);
        printf("Black pins: %d, White pins: %d\n", blackPins, whitePins);

        // Print the secret code for debugging purposes
        printf("Secret code: ");
        for (int i = 0; i < CODE_LENGTH; i++) {
            printColor(secretCode[i]);
        }
        printf("\n");

        // Check for win condition
if (blackPins == CODE_LENGTH) {
    printf("Congratulations! You've guessed the code.\n");
    break;
}

// Print the secret code for debugging purposes
printf("Secret code: ");
printColorString(secretCode, CODE_LENGTH);
printf("\n");

        attempts++;
    }

    // Check for loss condition
    if (attempts == MAX_GUESSES) {
        printf("Sorry, you've run out of attempts. The secret code was not guessed.\n");
    }

    return 0;
}
