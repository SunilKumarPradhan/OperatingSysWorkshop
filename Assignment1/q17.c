#include <stdio.h>

int main() {
    // Declaration of variables
    int a = 1, b = 2, c = 3;

    // Expression with different precedence groups
    c += (a > 0 && a <= 10) ? ++a : a / b;

    // Print the result
    printf("Result: %d\n", c);

    return 0;
}
