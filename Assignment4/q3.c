#include <stdio.h>

int main(void) {
    int x, y, m, n;
    scanf("%d%d", &x, &y);

    /* Assume x > 0 and y > 0 */
    m = x;
    n = y;

    while (m != n) {
        if (m > n)
            m = m - n;
        else
            n = n - m;
    }

    printf("GCD: %d\n", n);
    return 0;
}
