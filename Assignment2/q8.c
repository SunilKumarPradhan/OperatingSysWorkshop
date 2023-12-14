#include <stdio.h>

int main() {
    char color = 'k';  // You can change the value of color as needed

    switch (color) {
        case 'R':
            printf("red\n");
            break;
        case 'B':
            printf("blue\n");
            break;
        case 'Y':
            printf("yellow\n");
            break;
        default:
            printf("Unknown color\n");
    }

    return 0;
}
