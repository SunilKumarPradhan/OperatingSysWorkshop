#include <stdio.h>

int main() {
    int m, n;
    printf("Enter values for m and n: ");
    scanf("%d%d", &m, &n);

    int side1 = m * m - n * n;
    int side2 = 2 * m * n;
    int hypotenuse = m * m + n * n;

    printf("Pythagorean Triple: (%d, %d, %d)\n", side1, side2, hypotenuse);

    return 0;
}
