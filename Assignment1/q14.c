#include <stdio.h>

int main() {
    // Declaration of variables
    int i = 5, j = 7;
    float f = 5.5, g = -3.25;

    // (a) i += 5;
    i += 5;
    printf("(a) Result: %d\n", i);

    // (b) f -= g;
    f -= g;
    printf("(b) Result: %f\n", f);

    // (c) j *= (i - 3);
    j *= (i - 3);
    printf("(c) Result: %d\n", j);

    // (d) f /= 3;
    f /= 3;
    printf("(d) Result: %f\n", f);

    // (e) i %= (j - 2);
    i %= (j - 2);
    printf("(e) Result: %d\n", i);

    return 0;
}
