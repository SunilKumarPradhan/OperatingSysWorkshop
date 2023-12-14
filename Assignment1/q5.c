#include <stdio.h>

int main() {
    int i = 8, j = 15, k = 4;
    int result = 2 * ((i % 5) * (4 + (j - 3) / (k + 2)));

    printf("The value of the expression is: %d\n", result);

    return 0;
}
