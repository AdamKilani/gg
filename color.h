#ifndef COLOR_H
#define COLOR_H

// Déclarer l'énumération Color
enum Color {
    RED,
    CYAN,
    YELLOW,
    GREEN,
    BLUE,
    PURPLE,
    UNKNOWN // Ajouter une valeur pour les cas non reconnus
};

// Déclarer la fonction charToColor
enum Color charToColor(char c);

// Déclarer la fonction printColor
void printColor(enum Color color);

#endif
