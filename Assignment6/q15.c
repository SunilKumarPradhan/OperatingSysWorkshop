#include <stdio.h>

struct Numbers {
    int a;
    int b;
    int c;
    int d;
};

int main() {
    struct Numbers values;
    int *arr[] = {&values.a, &values.b, &values.c, &values.d};

    *(arr[0]) = 55;
    *(arr[1]) = 105;
    *(arr[2]) = 89;
    *(arr[3]) = 68;

    int maxvar = *(arr[0]);

    for (int i = 1; i < 4; i++) {
        if (*(arr[i]) > maxvar) {
            maxvar = *(arr[i]);
        }
    }

    printf("The maximum value among a, b, c, and d is: %d\n", maxvar);

    return 0;
}

