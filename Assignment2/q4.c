#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables
    char choice;
    float area;

    // Prompt user for input
    printf("Enter the first character of the figure (S or C): ");
    scanf(" %c", &choice);  // Note the space before %c to consume any whitespace characters

    // Check user's choice and calculate area accordingly
    if (choice == 'S' || choice == 's') {
        // Square
        float side;
        printf("Enter the side length of the square: ");
        scanf("%f", &side);
        area = side * side;
        printf("The area of the square is: %.2f\n", area);
    } else if (choice == 'C' || choice == 'c') {
        // Circle
        float radius;
        const float pi = 3.14159;
        printf("Enter the radius of the circle: ");
        scanf("%f", &radius);
        area = pi * pow(radius, 2);  // Using pow function from math.h to calculate square of radius
        printf("The area of the circle is: %.2f\n", area);
    } else {
        // Invalid input
        printf("Invalid choice. Please enter 'S' or 'C'.\n");
    }

    return 0;
}
