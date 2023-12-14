#include <stdio.h>

#define SALES_TAX 5

int main() {
    float purchaseTotal, discount, discountedTotal, salesTax, finalTotal;
    char isTeacher;

    // Get user input
    printf("Enter the total purchases: $");
    scanf("%f", &purchaseTotal);

    printf("Are you a teacher? (Y/N): ");
    scanf(" %c", &isTeacher);

    // Calculate discount
    if (isTeacher == 'Y' || isTeacher == 'y') {
        if (purchaseTotal >= 100) {
            discount = 0.12 * purchaseTotal;
        } else {
            discount = 0.10 * purchaseTotal;
        }
    } else {
        discount = 0;
    }

    // Calculate discounted total
    discountedTotal = purchaseTotal - discount;

    // Calculate sales tax
    salesTax = 0.01 * SALES_TAX * discountedTotal;

    // Calculate final total
    finalTotal = discountedTotal + salesTax;

    // Print receipt details
    printf("\nTotal purchases: $%.2f\n", purchaseTotal);
    printf("Teacher's discount (%.0f%%): $%.2f\n", (isTeacher == 'Y' || isTeacher == 'y') ? 12.0 : 10.0, discount);
    printf("Discounted total: $%.2f\n", discountedTotal);
    printf("Sales tax (%d%%): $%.2f\n", SALES_TAX, salesTax);
    printf("Total: $%.2f\n", finalTotal);

    return 0;
}
//./music_discount > receipt.txt