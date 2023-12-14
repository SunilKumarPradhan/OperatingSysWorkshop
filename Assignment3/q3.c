#include <stdio.h>

int main() {
    int m, n, lastValue;

    // Initialize the variable to count the number of times the first printf is executed
    int countFirstPrintf = 0;

    for (m = 10; m > 0; --m) {
        for (n = m; n > 1; --n) {
            printf("%d ", m + n);
            ++countFirstPrintf;
            lastValue = m + n;
        }
        printf("\n");
    }

    // Display the answers
    printf("No. of times the first call to printf executes: %d\n", countFirstPrintf);
    printf("No. of times the second call to printf executes: 10\n");
    printf("Last value displayed: %d\n", lastValue);

    return 0;
}
