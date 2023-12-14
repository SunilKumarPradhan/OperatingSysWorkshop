#include <stdio.h>

// Function to print Fibonacci series using recursion
void printFibo(int n, int a, int b, int count) {
    if (count > n) {
        return;
    }

    printf("%d ", a);

    // Recursive call to print the next Fibonacci number
    printFibo(n, b, a + b, count + 1);
}

int main() {
    int n;

    // Get input from the user
    printf("Enter the number of Fibonacci numbers to print: ");
    scanf("%d", &n);

    // Check if the input is valid
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Print Fibonacci numbers
    printf("Fibonacci Series: ");
    printFibo(n, 0, 1, 1);

    return 0;
}
