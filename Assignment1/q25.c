#include <stdio.h>

int main() {
    int i = -1, j = -1, k = 0, l = 2, m;

    // Evaluate the expression and assign the result to 'm'
    m = ++i || k++ && ++j || l++;

    // Print the values of 'i', 'j', 'k', 'l', and 'm'
    printf("%d %d %d %d %d\n", i, j, k, l, m);

    return 0;
}
