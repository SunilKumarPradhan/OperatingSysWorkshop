#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) {
        return 0; // Not prime
    }

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0; // Not prime
        }
    }

    return 1; // Prime
}

// Function to check if a number is odd or even
int isOddEven(int n) {
    return (n % 2 == 0) ? 0 : 1; // 0 represents even, 1 represents odd
}

int main() {
    int choice, num;

    do {
        // Display menu
        printf("\nMenu:\n");
        printf("1. Factorial of a number\n");
        printf("2. Prime or not\n");
        printf("3. Odd or even\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("Factorial of %d is %d\n", num, factorial(num));
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (isPrime(num)) {
                    printf("%d is a prime number\n", num);
                } else {
                    printf("%d is not a prime number\n", num);
                }
                break;

            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (isOddEven(num)) {
                    printf("%d is an odd number\n", num);
                } else {
                    printf("%d is an even number\n", num);
                }
                break;

            case 4:
                printf("Exiting the program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}
