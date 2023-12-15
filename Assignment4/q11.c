#include <stdio.h>


int nextPrime(int n);

int main() {
    int input;

   
    printf("Enter an integer: ");
    scanf("%d", &input);

    
    int result = nextPrime(input);
    printf("The next prime number larger than %d is: %d\n", input, result);

    return 0;
}


int nextPrime(int n) {
    int candidate = n + 1; 

    while (1) {
        int isPrime = 1; 

        for (int i = 2; i * i <= candidate; i++) {
            if (candidate % i == 0) {
                isPrime = 0; 
                break;
            }
        }

        
        if (isPrime) {
            return candidate; 
        }

        candidate++; 
    }
}
