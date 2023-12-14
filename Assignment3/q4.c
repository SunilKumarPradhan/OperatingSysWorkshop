#include <stdio.h>

int main() {
    int n;

    // Test cases
    int numbers[] = {154368, 621594, 123456};

    for (int i = 0; i < 3; ++i) {
        n = numbers[i];
        int sumOfDigits = 0;

        printf("Number: %d\nDigits (right to left): ", n);

        while (n > 0) {
            // Get the rightmost digit
            int digit = n % 10;

            // Add the digit to the sum
            sumOfDigits += digit;

            // Print the digit
            printf("%d ", digit);

            // Remove the rightmost digit
            n /= 10;
        }

        // Check if the sum of digits is divisible by 9
        if (sumOfDigits % 9 == 0) {
            printf("\n%d is divisible by 9\n", numbers[i]);
        } else {
            printf("\n%d is not divisible by 9\n", numbers[i]);
        }

        printf("\n");
    }

    return 0;
}
