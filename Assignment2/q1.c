#include <stdio.h>

int main() {
    double x;
    double y = 10.0;

    // Code snippet 1(a)
    x = 25.0;
    if (y != (x - 10.0))
        x = x - 10.0;
    else
        x = x / 2.0;
    printf("Result 1(a): %lf\n", x);

    // Code snippet 1(b)
    if (y < 15.0)
        if (y >= 0.0)
            x = 5 * y;
        else
            x = 2 * y;
    else
        x = 3 * y;
    printf("Result 1(b): %lf\n", x);

    // Code snippet 1(c)
    if (y < 15.0 && y >= 0.0)
        x = 5 * y;
    else
        x = 2 * y;
    printf("Result 1(c): %lf\n", x);

    return 0;
}
