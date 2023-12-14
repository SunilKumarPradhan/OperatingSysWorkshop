#include <stdio.h>

int main() {
    int watts, lumens;

    // Get input for watts
    printf("Enter the wattage of the light bulb: ");
    scanf("%d", &watts);

    // Switch statement to assign lumens based on watts
    switch (watts) {
        case 15:
            lumens = 125;
            break;
        case 25:
            lumens = 215;
            break;
        case 40:
            lumens = 500;
            break;
        case 60:
            lumens = 880;
            break;
        case 75:
            lumens = 1000;
            break;
        case 100:
            lumens = 1675;
            break;
        default:
            lumens = 1; // Assign 1 if watts is not in the table
    }

    // Print the result
    printf("Expected brightness in lumens: %d\n", lumens);

    return 0;
}
