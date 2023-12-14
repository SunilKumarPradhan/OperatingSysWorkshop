#include <stdio.h>

// Corrected structure definition
struct oswcourse {
    int secid;
    float avgm;
    char present;
    int *marks; // Pointer to int (removed parentheses)
    int (*teacher)(); // Pointer to function (removed parentheses)
} o1, o2;

int main() {
    // Your program logic goes here

    return 0;
}
