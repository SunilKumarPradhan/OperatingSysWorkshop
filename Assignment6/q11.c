#include <stdio.h>

int main() {
    int a[] = {120,502,118,188,106,447};
    int *p = a;

    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        printf("Value of a[%d]: %d\n", i, *(p + i));
    }

    return 0;
}