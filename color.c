#include "color.h"
#include <stdio.h>

// Fonction pour convertir un caractère en une valeur Color
enum Color charToColor(char c) {
    switch (c) {
        case 'R':
            return RED;
        case 'C':
            return CYAN;
        case 'Y':
            return YELLOW;
        case 'G':
            return GREEN;
        case 'B':
            return BLUE;
        case 'P':
            return PURPLE;
        default:
            return UNKNOWN;
    }
}

// Fonction pour afficher une valeur Color en couleur
void printColor(enum Color color) {
    switch (color) {
        case RED:
            printf("\033[1;31mR\033[0m");
            break;
        case CYAN:
            printf("\033[1;36mC\033[0m");
            break;
        case YELLOW:
            printf("\033[1;33mY\033[0m");
            break;
        case GREEN:
            printf("\033[1;32mG\033[0m");
            break;
        case BLUE:
            printf("\033[1;34mB\033[0m");
            break;
        case PURPLE:
            printf("\033[1;35mP\033[0m");
            break;
        default:
            printf("?");
            break;
    }
}
// Fonction pour afficher une chaîne de valeurs Color en couleur
void printColorString(const enum Color *colors, size_t length) {
    for (size_t i = 0; i < length; i++) {
        printColor(colors[i]);
        if (i < length - 1) {
            printf(" ");
        }
    }
}
