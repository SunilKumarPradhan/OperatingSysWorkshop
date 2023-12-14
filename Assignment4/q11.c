#include <stdio.h>

// Function prototype
int nextPrime(int n);

int main() {
    int input;

    // Input an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &input);

    // Call the nextPrime function and display the result
    int result = nextPrime(input);
    printf("The next prime number larger than %d is: %d\n", input, result);

    return 0;
}

// Function to find the next prime number larger than n
int nextPrime(int n) {
    int candidate = n + 1; // Start checking from the next integer

    while (1) {
        int isPrime = 1; // Assume candidate is prime

        // Check for factors up to the square root of the candidate
        for (int i = 2; i * i <= candidate; i++) {
            if (candidate % i == 0) {
                isPrime = 0; // Not a prime number
                break;
            }
        }

        // If isPrime is still 1, candidate is a prime number
        if (isPrime) {
            return candidate; // Return the first prime number found
        }

        candidate++; // Move to the next candidate
    }
}
