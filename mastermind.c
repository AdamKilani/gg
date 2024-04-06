#include "mastermind.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate random secret code
void generateSecretCode(enum Color secretCode[]) {
    srand(time(NULL));
    for (int i = 0; i < CODE_LENGTH; i++) {
        secretCode[i] = (enum Color)(rand() % COLORS);
    }
}

// Function to validate user guess
bool validateGuess(const enum Color guess[]) {
    // Check if guess is valid (e.g., length, colors used)
    // For simplicity, assume any input is valid
    return true;
}

// Function to check user guess against secret code
void checkGuess(const enum Color secretCode[], const enum Color guess[], int* blackPins, int* whitePins) {
    // Initialize pin counts
    *blackPins = 0;
    *whitePins = 0;

    // Arrays to track which code colors have been matched
    bool secretUsed[CODE_LENGTH] = {false};
    bool guessUsed[CODE_LENGTH] = {false};

    // First pass: count black pins (correct color, correct position)
    for (int i = 0; i < CODE_LENGTH; i++) {
        if (secretCode[i] == guess[i]) {
            (*blackPins)++;
            secretUsed[i] = guessUsed[i] = true;
        }
    }

    // Second pass: count white pins (correct color, wrong position)
    for (int i = 0; i < CODE_LENGTH; i++) {
        if (!guessUsed[i]) {
            for (int j = 0; j < CODE_LENGTH; j++) {
                if (!secretUsed[j] && secretCode[j] == guess[i]) {
                    (*whitePins)++;
                    secretUsed[j] = true;
                    break;
                }
            }
        }
    }
}
