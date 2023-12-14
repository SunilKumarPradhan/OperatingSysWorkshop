#include <stdio.h>

int main() {
    // Declare variables
    int windSpeed;

    // Prompt user for wind speed
    printf("Enter the wind speed (mph): ");
    scanf("%d", &windSpeed);

    // Check wind speed category and display the corresponding message
    if (windSpeed < 25) {
        printf("Not a strong wind.\n");
    } else if (windSpeed >= 25 && windSpeed <= 38) {
        printf("Strong wind.\n");
    } else if (windSpeed >= 39 && windSpeed <= 54) {
        printf("Gale.\n");
    } else if (windSpeed >= 55 && windSpeed <= 72) {
        printf("Whole gale.\n");
    } else {
        printf("Hurricane.\n");
    }

    return 0;
}
