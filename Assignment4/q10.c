#include <stdio.h>

#define BASE_FARE 4.00
#define RATE_PER_METER 0.25
#define METERS_PER_KM 140

double calculateFare(double distanceInKm) {
 
    double distanceInMeters = distanceInKm * 1000;

    double variableFare = (distanceInMeters / METERS_PER_KM) * RATE_PER_METER;

    double totalFare = BASE_FARE + variableFare;

    return totalFare;
}

int main() {
    double distance;

    printf("Enter the distance traveled in kilometers: ");
    scanf("%lf", &distance);

    if (distance < 0) {
        printf("Invalid input. Distance cannot be negative.\n");
        return 1; 
    }

    double totalFare = calculateFare(distance);
    printf("The total fare is: $%.2lf\n", totalFare);

    return 0;
}
