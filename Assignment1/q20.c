#include <stdio.h>

int main() {
    // Given value for a
    unsigned int a = 0x6db7;

    // Right shift by 6 bits
    unsigned int b = a >> 6;

    // Print the results
    printf("Original value of a: 0x%04X\n", a);
    printf("Result after right shift by 6 bits: 0x%04X\n", b);

    return 0;
}
