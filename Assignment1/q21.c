#include <stdio.h>

int main() {
    // Given initial value for a
    unsigned int a = 0x6db7;

    // (a) a &= 0x7f
    a &= 0x7f;
    printf("(a) Result: 0x%04X\n", a);

    // Reset a to the initial value
    a = 0x6db7;

    // (b) a ˆ= 0x7f
    a ^= 0x7f;
    printf("(b) Result: 0x%04X\n", a);

    // Reset a to the initial value
    a = 0x6db7;

    // (c) a |= 0x7f
    a |= 0x7f;
    printf("(c) Result: 0x%04X\n", a);

    // Reset a to the initial value
    a = 0x6db7;

    // (d) a = a & 0x3f06
    a = a & 0x3f06;
    printf("(d) Result: 0x%04X\n", a);

    // Reset a to the initial value
    a = 0x6db7;

    // (e) a = a | 0x3f06 << 8
    a = a | (0x3f06 << 8);
    printf("(e) Result: 0x%04X\n", a);

    return 0;
}
