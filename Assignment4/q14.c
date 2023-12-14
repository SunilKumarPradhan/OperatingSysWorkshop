#include <stdio.h>

// Function prototype
double population(int year);

int main() {
    // Input year after 1990
    int inputYear;
    printf("Enter a year after 1990: ");
    scanf("%d", &inputYear);

    // Call the population function to predict Gotham's population
    double predictedPopulation = population(inputYear);

    // Display the result
    printf("Predicted Gotham City population for %d (in thousands): %.3f\n", inputYear, predictedPopulation);

    return 0;
}

// Function to predict Gotham's population based on the given function
double population(int year) {
    // Model: P(t) = 52.966 + 2.184t
    double population = 52.966 + 2.184 * (year - 1990);
    return population;
}
