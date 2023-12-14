#include <stdio.h>

int main() {
    int item = 5;
    int product = 10;
    int x = 8;
    int y = 3;
    int zero_count = 0;
    int minus_sum = 0;
    int plus_sum = 0;

    // (a)
    if (item != 0) {
        product *= item;
    }
    printf("Product: %d\n", product);

    // (b)
    if (x > y) {
        y = x - y;
    } else {
        y = y - x;
    }

    // (c)
    if (x == 0) {
        zero_count += 1;
    } else if (x < 0) {
        minus_sum += x;
    } else {
        plus_sum += x;
    }

    return 0;
}
