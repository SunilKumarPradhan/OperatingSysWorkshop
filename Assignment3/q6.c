#include <stdio.h>

int main() {
    // Variables to count different categories of speeds
    int highSpeedCount = 0, mediumSpeedCount = 0, slowSpeedCount = 0;

    // Variables for calculating the average speeds
    int totalHighSpeed = 0, totalMediumSpeed = 0, totalSlowSpeed = 0;

    // Variable to store the current speed being processed
    int speed;

    // Open the file for reading
    FILE *file = fopen("vspeed.txt", "r");

    // Check if the file opened successfully
    if (file == NULL) {
        perror("Error opening file");
        return 1; // Exit with an error code
    }

    // Process speeds from the file
    while (fscanf(file, "%d", &speed) != EOF) {
        // Classify the speed into categories
        if (speed >= 90) {
            highSpeedCount++;
            totalHighSpeed += speed;
            printf("High speed vehicle: %d\n", speed);
        } else if (speed >= 50) {
            mediumSpeedCount++;
            totalMediumSpeed += speed;
            printf("Medium speed vehicle: %d\n", speed);
        } else {
            slowSpeedCount++;
            totalSlowSpeed += speed;
            printf("Slow speed vehicle: %d\n", speed);
        }
    }

    // Close the file
    fclose(file);

    // Display the counts
    printf("\nHigh Speed Count: %d\n", highSpeedCount);
    printf("Medium Speed Count: %d\n", mediumSpeedCount);
    printf("Slow Speed Count: %d\n", slowSpeedCount);

    // Display the average speeds
    printf("\nAverage High Speed: %.2f\n", (float)totalHighSpeed / highSpeedCount);
    printf("Average Medium Speed: %.2f\n", (float)totalMediumSpeed / mediumSpeedCount);
    printf("Average Slow Speed: %.2f\n", (float)totalSlowSpeed / slowSpeedCount);

    return 0;
}
/*Create a file named vspeed.txt and enter the vehicle speeds separated by spaces.
Run the program using input redirection (./vehicle_speeds < vspeed.txt). The program will read data from the file.*/