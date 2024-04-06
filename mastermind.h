#ifndef MASTERMIND_H
#define MASTERMIND_H

#include <stdbool.h>
#include "color.h"

// Déclaration des constantes
#define CODE_LENGTH 4
#define MAX_GUESSES 10
#define NUM_COLORS 6

// Déclaration des fonctions propres au jeu Mastermind
void generateSecretCode(enum Color secretCode[]);
bool validateGuess(const enum Color guess[]);
void checkGuess(const enum Color secretCode[], const enum Color guess[], int *blackPins, int *whitePins);

#endif
