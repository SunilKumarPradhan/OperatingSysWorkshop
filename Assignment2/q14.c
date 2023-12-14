#include <stdio.h>

#define BASE_CHARGE 15.00
#define AIR_TIME_LIMIT 50
#define TEXT_LIMIT 50
#define AIR_TIME_RATE 0.25
#define TEXT_RATE 0.15
#define NINE_ONE_ONE_FEE 0.44
#define SALES_TAX_RATE 0.05

int main() {
    int minutesUsed, messagesUsed;

    // Get user input
    printf("Enter the number of minutes used: ");
    scanf("%d", &minutesUsed);

    printf("Enter the number of text messages used: ");
    scanf("%d", &messagesUsed);

    // Calculate charges
    double additionalMinutesCharge = (minutesUsed > AIR_TIME_LIMIT) ? (minutesUsed - AIR_TIME_LIMIT) * AIR_TIME_RATE : 0.0;
    double additionalTextCharge = (messagesUsed > TEXT_LIMIT) ? (messagesUsed - TEXT_LIMIT) * TEXT_RATE : 0.0;

    // Calculate total charges
    double totalCharge = BASE_CHARGE + additionalMinutesCharge + additionalTextCharge + NINE_ONE_ONE_FEE;

    // Calculate tax
    double tax = totalCharge * SALES_TAX_RATE;

    // Calculate final total bill
    double totalBill = totalCharge + tax;

    // Display results
    printf("\nBill Details:\n");
    printf("Base Charge: $%.2f\n", BASE_CHARGE);
    if (additionalMinutesCharge > 0.0) {
        printf("Additional Minutes Charge: $%.2f\n", additionalMinutesCharge);
    }
    if (additionalTextCharge > 0.0) {
        printf("Additional Text Charge: $%.2f\n", additionalTextCharge);
    }
    printf("911 Fee: $%.2f\n", NINE_ONE_ONE_FEE);
    printf("Sales Tax: $%.2f\n", tax);
    printf("Total Bill: $%.2f\n", totalBill);

    return 0;
}
