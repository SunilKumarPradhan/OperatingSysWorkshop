#include <stdio.h>

// Function to convert decimal to binary using recursion
void decimalToBinary(int decimal) {
    if (decimal > 0) {
        decimalToBinary(decimal / 2);
        printf("%d", decimal % 2);
    }
}

int main() {
    int decimal;

    // Get input from the user
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Check if the input is valid
    if (decimal < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    // Print binary equivalent
    printf("Binary equivalent: ");
    if (decimal == 0) {
        printf("0");
    } else {
        decimalToBinary(decimal);
    }

    printf("\n");

    return 0;
}
