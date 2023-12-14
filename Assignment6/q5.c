#include <stdio.h>

// Define the structure
struct Point {
    int a;
    int b;
    int c;
};

int main() {
    // Declare and initialize a structure variable
    struct Point pointInstance = {12,25,18};

    // Declare and initialize a pointer to the structure
    struct Point *ptr = &pointInstance;
    ptr->a += 10;
    ptr->b += 10;
    ptr->c += 10;

    // Display the values using the pointer
    printf("a: %d\n", pointInstance.a);
    printf("b: %d\n", pointInstance.b);
    printf("c: %d\n", pointInstance.c);

    return 0;
}
