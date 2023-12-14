#include <stdio.h>

// Function prototype to calculate area and circumference
void calculateCircleProperties(float radius, float *area, float *circumference);

int main() {
    float radius, area, circumference;

    // Input radius from the user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Call the function to calculate area and circumference
    calculateCircleProperties(radius, &area, &circumference);

    // Output the results
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}

// Function definition to calculate area and circumference
void calculateCircleProperties(float radius, float *area, float *circumference) {
    // Assuming pi as 3.14159
    const float pi = 3.14159;

    // Calculate area and circumference
    *area = pi * radius * radius;
    *circumference = 2 * pi * radius;
}
/*Problem:
Compute the area and circumference of a circle using its radius.

Inputs:

Radius (r)
Outputs:

Area of the circle (A)
Circumference of the circle (C)
Algorithm:

Input:

Prompt the user to enter the radius of the circle (r).
Compute Area:

Use the formula 
�
=
�
�
2
A=πr 
2
  to calculate the area, where 
�
π is a constant (approximately 3.14159).
Compute Circumference:

Use the formula 
�
=
2
�
�
C=2πr to calculate the circumference.
Output:

Display the calculated area and circumference.*/