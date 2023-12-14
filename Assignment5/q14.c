#include <stdio.h>

int main() {
    int barcode[12];
    int oddSum = 0, evenSum = 0, checkDigit, totalSum;

    // Prompt the user to enter the 12 digits of a barcode separated by spaces
    printf("Enter the 12 digits of the barcode separated by spaces: ");

    // Read the barcode digits into an array
    for (int i = 0; i < 12; i++) {
        scanf("%1d", &barcode[i]);
    }

    // Step 1: Calculate the sum of the digits in odd-numbered positions (1st, 3rd, ..., 11th digits) and multiply by 3
    for (int i = 0; i < 12; i += 2) {
        oddSum += barcode[i];
    }
    oddSum *= 3;

    // Step 2: Calculate the sum of the digits in even-numbered positions (2nd, 4th, ..., 10th digits)
    for (int i = 1; i < 11; i += 2) {
        evenSum += barcode[i];
    }

    // Combine the results from steps 1 and 2
    totalSum = oddSum + evenSum;

    // Step 3: Calculate the check digit
    checkDigit = (totalSum % 10 == 0) ? 0 : 10 - (totalSum % 10);

    // Output the results
    printf("\nResults:\n");
    printf("Step 1: Sum of odd-positioned digits * 3 = %d\n", oddSum);
    printf("Step 2: Sum of even-positioned digits = %d\n", evenSum);
    printf("Check Digit: %d\n", checkDigit);

    // Compare the check digit with the last digit of the barcode
    if (checkDigit == barcode[11]) {
        printf("Barcode validated!\n");
    } else {
        printf("Error in barcode.\n");
    }

    return 0;
}
