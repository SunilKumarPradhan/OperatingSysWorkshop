#include <stdio.h>

int main() {
    // Assume x is a variable representing a value

    // Get the value of x
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);

    // Check the condition
    if (0 <= x && x <= 4) {
        printf("Condition is true\n");
    } else {
        printf("Condition is false\n");
    }

    return 0;
}
