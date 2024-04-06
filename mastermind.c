#include "mastermind.h"
#include <stdlib.h> // Include the header file for the rand function

// Fonction pour générer le code secret
void generateSecretCode(enum Color secretCode[]) {
    for (int i = 0; i < CODE_LENGTH; i++) {
        secretCode[i] = rand() % NUM_COLORS;
    }
}

// Fonction pour valider la supposition
bool validateGuess(const enum Color guess[]) {
    for (int i = 0; i < CODE_LENGTH; i++) {
        if (guess[i] < 0 || guess[i] >= NUM_COLORS) {
            return false; // Supposition invalide si elle est en dehors de la plage de couleurs
        }
    }
    return true; // Supposition valide sinon
}

// Fonction pour vérifier la supposition par rapport au code secret
void checkGuess(const enum Color secretCode[], const enum Color guess[], int *blackPins, int *whitePins) {
    int secretCount[NUM_COLORS] = {0};
    int guessCount[NUM_COLORS] = {0};

    // Compter les occurrences de chaque couleur dans le code secret et la supposition
    for (int i = 0; i < CODE_LENGTH; i++) {
        secretCount[secretCode[i]]++;
        guessCount[guess[i]]++;
    }

    // Vérifier les pins noirs (couleurs correctes à la bonne position)
    *blackPins = 0;
    for (int i = 0; i < CODE_LENGTH; i++) {
        if (secretCode[i] == guess[i]) {
            (*blackPins)++;
            secretCount[guess[i]]--;
            guessCount[guess[i]]--;
        }
    }

    // Vérifier les pins blancs (couleurs correctes mais pas à la bonne position)
    *whitePins = 0;
    for (int i = 0; i < NUM_COLORS; i++) {
        *whitePins += (guessCount[i] > 0 && secretCount[i] > 0) ? 1 : 0;
    }
    *whitePins -= *blackPins;
}
