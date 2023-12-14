#include <stdio.h>

// Define the structure
struct Point {
    float x;
    float y;
    float z;
};

int main() {
    // Declare and initialize a structure variable
    struct Point pointInstance = {6.7, 1.2, 2.3};

    // Declare and initialize a pointer to the structure
    struct Point *p = &pointInstance;

    // Display the values using the pointer
    printf("x: %f\n", p->x);
    printf("y: %f\n", p->y);
    printf("z: %f\n", p->z);

    return 0;
}
