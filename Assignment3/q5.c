#include <stdio.h>

// Function to calculate the greatest common divisor (gcd) of two numbers
int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate and display the gcd
    printf("The greatest common divisor (gcd) of %d and %d is: %d\n", num1, num2, gcd(num1, num2));

    return 0;
}
