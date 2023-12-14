#include <stdio.h>

int main() {
    double side1, side2, side3;

    // Get user input for the lengths of the sides
    printf("Enter the length of side 1: ");
    scanf("%lf", &side1);

    printf("Enter the length of side 2: ");
    scanf("%lf", &side2);

    printf("Enter the length of side 3: ");
    scanf("%lf", &side3);

    // Check if the entered lengths form a valid triangle
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        // Determine the type of triangle
        if (side1 == side2 && side2 == side3) {
            printf("The triangle is an equilateral triangle.\n");
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            printf("The triangle is an isosceles triangle.\n");
        } else {
            printf("The triangle is a scalene triangle.\n");
        }
    } else {
        printf("The entered lengths do not form a valid triangle.\n");
    }

    return 0;
}
