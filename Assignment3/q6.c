#include <stdio.h>

int main() {
   
    int highSpeedCount = 0, mediumSpeedCount = 0, slowSpeedCount = 0;

    int totalHighSpeed = 0, totalMediumSpeed = 0, totalSlowSpeed = 0;

    int speed;

    FILE *file = fopen("vspeed.txt", "r");

    if (file == NULL) {
        perror("Error opening file");
        return 1; 
    }

   
    while (fscanf(file, "%d", &speed) != EOF) {

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


    fclose(file);


    printf("\nHigh Speed Count: %d\n", highSpeedCount);
    printf("Medium Speed Count: %d\n", mediumSpeedCount);
    printf("Slow Speed Count: %d\n", slowSpeedCount);


    printf("\nAverage High Speed: %.2f\n", (float)totalHighSpeed / highSpeedCount);
    printf("Average Medium Speed: %.2f\n", (float)totalMediumSpeed / mediumSpeedCount);
    printf("Average Slow Speed: %.2f\n", (float)totalSlowSpeed / slowSpeedCount);

    return 0;
}
/*Create a file named vspeed.txt and enter the vehicle speeds separated by spaces.
Run the program using input redirection (./vehicle_speeds < vspeed.txt). The program will read data from the file.*/