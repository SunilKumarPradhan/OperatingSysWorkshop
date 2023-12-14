/*Simulate the structure with  in C to store 55 in a, 105 in b, 89 in c and 68 in d using their repective pointers. Additionally find the maximum among a, b, c and d through pointer manipulation.
Finally Store the maximum to the required variable and display the maximum.*/

#include <stdio.h>

int main() {
    int mergeArrays[] = {55, 105, 89, 68};
    int *a = &mergeArrays[0];  
    int *b = &mergeArrays[1];
    int *c = &mergeArrays[2];
    int *d = &mergeArrays[3];

    /* Compare the pointer values to get max */
    int maxvar = *a;
    if (*b > maxvar) {
        maxvar = *b;
    }
    if (*c > maxvar) {
        maxvar = *c;
    }
    if (*d > maxvar) {
        maxvar = *d;
    }

    printf("Maximum value: %d\n", maxvar);

    return 0;
}
