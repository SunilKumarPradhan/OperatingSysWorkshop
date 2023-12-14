#include <stdio.h>

int main() {
    int m1, a, b, c;

    // Prompt the user to enter values for a, b, and c
    printf("Enter the values of a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);

    // Using the ternary operator to find the maximum among a, b, and c
    m1 = (a > b) ? ((a > c) ? a : c) : b;

    // Print the result
    printf("m1=%d\n", m1);

    return 0;
}
