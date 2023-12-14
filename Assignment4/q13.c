#include <stdio.h>

// Function prototype
void displayInstructions();

int main() {
    // Display instructions to the user
    displayInstructions();

    // Input temperature in Fahrenheit
    double temperature;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%lf", &temperature);

    // Calculate the speed of sound in air
    double speedOfSound = 1086 * (5 * temperature + 297) / 247.0;

    // Display the result
    printf("The speed of sound in air at %.2f°F is %.2f ft/sec.\n", temperature, speedOfSound);

    return 0;
}

// Function to display instructions to the user
void displayInstructions() {
    printf("This program calculates the speed of sound in air based on the temperature.\n");
    printf("The formula used is: a = 1086 * (5 * T + 297) / 247\n");
    printf("Please enter the temperature in Fahrenheit.\n\n");
}
