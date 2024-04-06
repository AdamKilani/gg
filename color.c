#include "color.h"
#include <stdio.h>

// Function to print color representation
void printColor(enum Color color) {
    const char* colorCodes[] = {"\x1b[31m", "\x1b[36m", "\x1b[33m", "\x1b[32m", "\x1b[34m", "\x1b[35m"};
    const char* resetCode = "\x1b[0m";
    const char* colorNames[] = {"Red", "Cyan", "Yellow", "Green", "Blue", "Purple"};
    printf("%s%s%s ", colorCodes[color], colorNames[color], resetCode);
}
