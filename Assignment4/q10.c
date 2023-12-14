#include <stdio.h>

// Constants for fare calculation
#define BASE_FARE 4.00
#define RATE_PER_METER 0.25
#define METERS_PER_KM 140

// Function to calculate taxi fare
double calculateFare(double distanceInKm) {
    // Convert distance to meters
    double distanceInMeters = distanceInKm * 1000;

    // Calculate the variable portion of the fare based on distance
    double variableFare = (distanceInMeters / METERS_PER_KM) * RATE_PER_METER;

    // Calculate total fare
    double totalFare = BASE_FARE + variableFare;

    return totalFare;
}

int main() {
    double distance;

    // Input the distance traveled in kilometers
    printf("Enter the distance traveled in kilometers: ");
    scanf("%lf", &distance);

    // Check for invalid input
    if (distance < 0) {
        printf("Invalid input. Distance cannot be negative.\n");
        return 1; // Exit with an error code
    }

    // Calculate and display the total fare
    double totalFare = calculateFare(distance);
    printf("The total fare is: $%.2lf\n", totalFare);

    return 0;
}
