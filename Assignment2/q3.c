#include <stdio.h>

int main() {
    // Declare variables
    float balance = 1000.0;  // Initial balance
    float deduct;

    // Get input for deduction
    printf("Enter the deduction amount: ");
    scanf("%f", &deduct);

    // Check if deduction is less than balance
    if (deduct < balance) {
        // Deduct the amount from the balance
        balance = balance - deduct;
        printf("New balance is %.2f\n", balance);
    } else {
        // Print refusal message if deduction would overdraw the account
        printf("Deduction of %.2f refused.\n", deduct);
        printf("Would overdraw account.\n");
        printf("Deduction = %.2f Final balance = %.2f\n", deduct, balance);
    }

    return 0;
}
