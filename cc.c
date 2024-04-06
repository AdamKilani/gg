#include "color.h"
#include <stdio.h>
#include <string.h>

// Fonction pour convertir un caractère ou un mot en une valeur Color
enum Color charToColor(const char *c) {
    static struct {
        const char *name;
        Color color;
    } color_map[] = {
        { "RED", RED },
        { "CYAN", CYAN },
        { "YELLOW", YELLOW },
        { "GREEN", GREEN },
        { "BLUE", BLUE },
        { "PURPLE", PURPLE },
    };

    // Tentative de correspondance avec les abréviations de couleur
    switch (*c) {
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
            break;
    }

    // Tentative de correspondance avec les noms de couleur
    for (size_t i = 0; i < sizeof(color_map) / sizeof(color_map[0]); i++) {
        if (strcasecmp(c, color_map[i].name) == 0) {
            return color_map[i].color;
        }
    }

    return UNKNOWN;
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
