#include <stdio.h>

int main() {
    // Code snippet: 1(a)
    int i = 0;
    while (i <= 5) {
        printf("%3d %3d\n", i, 10 - i);
        i = i + 1;
    }

    // Code snippet: 1(b)
    int j = 1;
    while (1) {
        printf("%d ", j++);
        if (j > 10)
            break;
    }
    printf("\n");

    // Code snippet: 1(c)
    int a = 1;
    do {
        printf("%d ", a++);
    } while (a < 10);
    printf("\n");

    // Code snippet: 1(d)
    int n = 5;
    for (int i = 1, j = 1; j <= n; i += 2, j++) {
        printf("%d%d\n", i, j);
    }

    // Code snippet: 1(e)
    int count = 11;
    while (--count > 1) {
        printf("count down is %d \n", count);
    }

    // Code snippet: 1(f)
    float x = 1.1;
    while (x == 1.1) {
        printf("%f\n", x);
        x = x - 0.1;
    }

    return 0;
}
