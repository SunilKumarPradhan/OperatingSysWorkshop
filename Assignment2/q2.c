#include <stdio.h>

int main() {
    // Declare variables
    int product = 5;  // Initial value of product
    int item;

    // Get input for item
    printf("Enter a value for item: ");
    scanf("%d", &item);

    // Check if item is nonzero
    if (item != 0) {
        // Multiply product by item and save the result in product
        product *= item;
    }

    // Print the value of product
    printf("Result: %d\n", product);

    return 0;
}
