#include <stdio.h>

int main(void) {
    double x, y, m, e;

    // Assuming values for m and e are given
    m =15 ;/* some value */
    e =3; /* some value */
    x = m;
    y = 1;

    while (x - y > e) {
        x = (x + y) / 2;
        y = m / x;
    }

    printf("%f", x);
    return 0;
}
