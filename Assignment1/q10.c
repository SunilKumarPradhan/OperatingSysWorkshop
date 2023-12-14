#include <stdio.h>

int main() {
    // (a) c == a + b || !flag
    int a_a = 6, b_a = 9, c_a = 14, flag_a = 1;
    int result_a = c_a == a_a + b_a || !flag_a;
    // The entire expression is evaluated due to short-circuit evaluation.
    printf("(a) Result: %d\n", result_a);

    // (b) a != 7 && flag || c >= 6
    int a_b = 6, b_b = 9, c_b = 14, flag_b = 1;
    int result_b = a_b != 7 && flag_b || c_b >= 6;
    // The entire expression is evaluated due to short-circuit evaluation.
    printf("(b) Result: %d\n", result_b);

    // (c) !(b <= 12) && a % 2 == 0
    int a_c = 6, b_c = 9, c_c = 14, flag_c = 1;
    int result_c = !(b_c <= 12) && a_c % 2 == 0;
    // The entire expression is evaluated due to short-circuit evaluation.
    printf("(c) Result: %d\n", result_c);

    // (d) !(a > 5 || c < a + b)
    int a_d = 6, b_d = 9, c_d = 14, flag_d = 1;
    int result_d = !(a_d > 5 || c_d < a_d + b_d);
    // The entire expression is evaluated due to short-circuit evaluation.
    printf("(d) Result: %d\n", result_d);

    return 0;
}
