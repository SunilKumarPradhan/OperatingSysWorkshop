#include <stdio.h>

int main() {
    // Declaration of variables
    int i, j = 5;

    // (a) i = ('x' - 'o') / 3;
    i = ('x' - 'o') / 3;
    printf("(a) Result: %d\n", i);

    // (b) i = ('y' - 'o') / 3;
    i = ('y' - 'o') / 3;
    printf("(b) Result: %d\n", i);

    // (c) i = 2 * j / 2; (say j is an integer and j is 5)
    i = 2 * j / 2;
    printf("(c) Result: %d\n", i);

    // (d) i = 2 * (j / 2);
    i = 2 * (j / 2);
    printf("(d) Result: %d\n", i);

    // (e) i = 3.0;
    i = 3.0;
    printf("(e) Result: %d\n", i);

    // (f) i = -3.5;
    i = -3.5;
    printf("(f) Result: %d\n", i);

    return 0;
}
