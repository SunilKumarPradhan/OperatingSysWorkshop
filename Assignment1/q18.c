#include <stdio.h>

int main() {
    // Declaration of variables
    int m1, m2, a, b, c;

    // Input values for a, b, and c
    printf("Enter the values of a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);

    // Determine the greater value between a and b and store it in m1
    m1 = (a > b) ? a : b;

    // Determine the greater value between m1 and c and store it in m2
    m2 = (m1 > c) ? m1 : c;

    // Print the result
    printf("%d\n", m2);

    return 0;
}
