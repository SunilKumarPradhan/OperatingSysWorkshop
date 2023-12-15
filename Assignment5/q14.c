#include <stdio.h>

int main() {
    int barcode[12];
    int oddSum = 0, evenSum = 0, checkDigit, totalSum;

    printf("Enter the 12 digits of the barcode separated by spaces: ");

     for (int i = 0; i < 12; i++) {
        scanf("%1d", &barcode[i]);
    }

     for (int i = 0; i < 12; i += 2) {
        oddSum += barcode[i];
    }
    oddSum *= 3;

    for (int i = 1; i < 11; i += 2) {
        evenSum += barcode[i];
    }

  
    totalSum = oddSum + evenSum;

 
    checkDigit = (totalSum % 10 == 0) ? 0 : 10 - (totalSum % 10);


    printf("\nResults:\n");
    printf("Step 1: Sum of odd-positioned digits * 3 = %d\n", oddSum);
    printf("Step 2: Sum of even-positioned digits = %d\n", evenSum);
    printf("Check Digit: %d\n", checkDigit);


    if (checkDigit == barcode[11]) {
        printf("Barcode validated!\n");
    } else {
        printf("Error in barcode.\n");
    }

    return 0;
}
