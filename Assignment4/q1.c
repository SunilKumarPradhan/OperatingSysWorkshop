#include <stdio.h>


void calculateCircleProperties(float radius, float *area, float *circumference);

int main() {
    float radius, area, circumference;


    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    calculateCircleProperties(radius, &area, &circumference);

    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}


void calculateCircleProperties(float radius, float *area, float *circumference) {
    // Assuming pi as 3.14159
    const float pi = 3.14159;

 
    *area = pi * radius * radius;
    *circumference = 2 * pi * radius;
}