#include <stdio.h>

int main() {
    float a = 2.2, b = -6.2, x1 = 0.005, x2 = -12.88;

    // Output with labeled format specifiers
    printf("$%4.2f %7.1f%%\n", a, b);
    printf("x1=%7.3f x2=%7.3f\n", x1, x2);

    return 0;
}
