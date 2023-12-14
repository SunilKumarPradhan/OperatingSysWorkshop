#include <stdio.h>

int main() {
    // Given values
    double x = 3.0, y = 4.0, z = 2.0;
    int flag = 0;

    // (a) !flag
    int result_a = !flag;
    printf("(a) !flag: %d\n", result_a);

    // (b) x + y/z <= 3.5
    int result_b = x + y / z <= 3.5;
    printf("(b) x + y/z <= 3.5: %d\n", result_b);

    // (c) !flag||(y + z >= x − z)
    int result_c = !flag || (y + z >= x - z);
    printf("(c) !flag||(y + z >= x − z): %d\n", result_c);

    // (d) !(flag||(y + z >= x − z))
    int result_d = !(flag || (y + z >= x - z));
    printf("(d) !(flag||(y + z >= x − z)): %d\n", result_d);

    return 0;
}
