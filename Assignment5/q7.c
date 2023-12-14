#include <stdio.h>

int SimpleFunction(int y[], int n, int x) {
    int total = y[0], loopIndex;

    for (loopIndex = 1; loopIndex <= n - 1; loopIndex++)
        total = x * total + y[loopIndex];

    return total;
}

int main() {
    // Initializing array z with 1 for all elements
    int z[10];
    for (int i = 0; i < 10; i++) {
        z[i] = 1;
    }

    // Calling SimpleFunction with array z, size 10, and multiplier 2
    int result = SimpleFunction(z, 10, 2);

    // Displaying the result
    printf("Result: %d\n", result);

    return 0;
}
