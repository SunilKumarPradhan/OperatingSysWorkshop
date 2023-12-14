#include <stdio.h>

// Function to calculate the sum of a geometric sequence
double geometricSum(int a, int r, int n) {
    // Base case: when n becomes 0, return 0
    if (n == 0) {
        return 0;
    }

    // Recursive case: sum the current term and call the function with n-1
    return a * pow(r, n - 1) + geometricSum(a, r, n - 1);
}

int main() {
    int a, r, n;

    // Get input from the user
    printf("Enter the first term (a): ");
    scanf("%d", &a);

    printf("Enter the common ratio (r): ");
    scanf("%d", &r);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Calculate and print the sum of the geometric sequence
    double sum = geometricSum(a, r, n);
    printf("Sum of the geometric sequence: %.2lf\n", sum);

    return 0;
}
