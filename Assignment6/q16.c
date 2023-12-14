#include <stdio.h>

void sumArrays(int *a, int *b, int *c, int *d, int *sumarray, int size) {
    for (int i = 0; i < size; i++) {
        sumarray[i] = *a + *b + *c + *d;
        a++;
        b++;
        c++;
        d++;
    }
}

int main() {
    int a[] = {1, 2, 3, 4};
    int b[] = {5, 6, 7, 8};
    int c[] = {9, 10, 11, 12};
    int d[] = {13, 14, 15, 16};
    int sumarray[4];

    sumArrays(a, b, c, d, sumarray, 4);

    printf("Sum of elements from arrays a, b, c, d:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d ", sumarray[i]);
    }
    printf("\n");

    return 0;
}

