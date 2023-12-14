#include <stdio.h>
#include <math.h>

int main() {
    double leg1, leg2, hypotenuse;

    // Prompt the user for input
    printf("Enter the length of the first leg: ");
    scanf("%lf", &leg1);

    printf("Enter the length of the second leg: ");
    scanf("%lf", &leg2);

    // Calculate the hypotenuse using the Pythagorean theorem
    hypotenuse = sqrt(pow(leg1, 2) + pow(leg2, 2));

    // Display the result
    printf("The length of the hypotenuse is: %lf\n", hypotenuse);

    return 0;
}
