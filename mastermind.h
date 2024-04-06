#ifndef MASTERMIND_H
#define MASTERMIND_H

#include <stdbool.h>
#include "color.h"

// Constants
#define COLORS 6
#define CODE_LENGTH 4
#define MAX_GUESSES 10

// Function prototypes
void generateSecretCode(enum Color secretCode[]);
bool validateGuess(const enum Color guess[]);
void checkGuess(const enum Color secretCode[], const enum Color guess[], int* blackPins, int* whitePins);

#endif /* MASTERMIND_H */
