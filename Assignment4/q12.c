#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function prototypes
int convertToDecimal(char num[], int base);
void convertFromDecimal(int decimalNum, int newBase);

int main() {
    int inputBase, outputBase;
    char number[100];

    // Input the base of the original number
    printf("Enter the base of the original number (between 2 and 16): ");
    scanf("%d", &inputBase);

    // Validate input base
    if (inputBase < 2 || inputBase > 16) {
        printf("Invalid input base. Please choose a base between 2 and 16.\n");
        return 1;
    }

    // Input the number in the original base
    printf("Enter the number in base %d: ", inputBase);
    scanf("%s", number);

    // Input the base for the conversion
    printf("Enter the base for conversion (between 2 and 16): ");
    scanf("%d", &outputBase);

    // Validate output base
    if (outputBase < 2 || outputBase > 16) {
        printf("Invalid output base. Please choose a base between 2 and 16.\n");
        return 1;
    }

    // Convert the number to decimal
    int decimalNumber = convertToDecimal(number, inputBase);

    // Convert the decimal number to the desired base
    convertFromDecimal(decimalNumber, outputBase);

    return 0;
}

// Function to convert a number from an arbitrary base to decimal
int convertToDecimal(char num[], int base) {
    int decimalNum = 0;
    int length = strlen(num);

    for (int i = 0; i < length; i++) {
        int digit;
        if (num[i] >= '0' && num[i] <= '9') {
            digit = num[i] - '0';
        } else if (num[i] >= 'A' && num[i] <= 'F') {
            digit = num[i] - 'A' + 10;
        } else if (num[i] >= 'a' && num[i] <= 'f') {
            digit = num[i] - 'a' + 10;
        } else {
            printf("Invalid digit in the input number.\n");
            exit(1);
        }

        decimalNum += digit * pow(base, length - 1 - i);
    }

    return decimalNum;
}

// Function to convert a decimal number to an arbitrary base
void convertFromDecimal(int decimalNum, int newBase) {
    int remainder, quotient;
    int temp[100];
    int i = 0;

    quotient = decimalNum;

    while (quotient != 0) {
        remainder = quotient % newBase;
        if (remainder < 10) {
            temp[i] = remainder + '0';
        } else {
            temp[i] = remainder - 10 + 'A';
        }
        i++;
        quotient = quotient / newBase;
    }

    // Display the converted number in the desired base
    printf("The number in base %d: ", newBase);
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", temp[j]);
    }
    printf("\n");
}
