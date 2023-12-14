#include <stdio.h>

void copyDistinct(int input[], int n, int output[], int *outputSize) {
    // Iterate through the input array
    for (int i = 0; i < n; i++) {
        int isDistinct = 1;

        // Check if the current element is already in the output array
        for (int j = 0; j < *outputSize; j++) {
            if (input[i] == output[j]) {
                isDistinct = 0;
                break;
            }
        }

        // If the element is distinct, add it to the output array
        if (isDistinct) {
            output[*outputSize] = input[i];
            (*outputSize)++;
        }
    }
}

int main() {
    int input[] = {4, 7, 7, 3, 2, 5, 5};
    int n = sizeof(input) / sizeof(input[0]);

    int output[100]; // Assuming a maximum size for the output array
    int outputSize = 0;

    copyDistinct(input, n, output, &outputSize);

    // Display the distinct elements in the output array
    printf("Distinct elements: ");
    for (int i = 0; i < outputSize; i++) {
        printf("%d ", output[i]);
    }
    printf("\n");

    return 0;
}
