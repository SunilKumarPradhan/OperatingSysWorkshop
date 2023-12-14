#include <stdio.h>

int main() {
    // Declarations and initial assignments
    int i = 8;
    int j = 5;
    float x = 0.005;
    float y = -0.01;
    char c = 'c', d = 'd';

    // Expressions
    // (a) (3 * i - 2 * j) % (2 * d - c)
    int result_a = (3 * i - 2 * j) % (2 * d - c);

    // (b) (x > y) && (i > 0) && (j < 5)
    int result_b = (x > y) && (i > 0) && (j < 5);

    // (c) 2 * x + (y == 0)
    float result_c = 2 * x + (y == 0);

    // (d) (2 * x + y) == 0
    int result_d = (2 * x + y) == 0;

    // (e) 5 * (i + j) > 'c'
    int result_e = 5 * (i + j) > 'c';

    // (f) i++
    i++;

    // Print the results
    printf("(a) Result: %d\n", result_a);
    printf("(b) Result: %d\n", result_b);
    printf("(c) Result: %f\n", result_c);
    printf("(d) Result: %d\n", result_d);
    printf("(e) Result: %d\n", result_e);
    printf("(f) Result: %d\n", i);

    return 0;
}
