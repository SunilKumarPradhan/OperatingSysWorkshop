#include <stdio.h>

int main() {
    int prime_lt_100[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

    // (a) prime_lt_100[24];
    printf("(a) prime_lt_100[24]: %d\n", prime_lt_100[24]);

    // (b) int i=10; prime_lt_100[i+4];
    int i = 10;
    printf("(b) prime_lt_100[%d + 4]: %d\n", i, prime_lt_100[i + 4]);

    // (c) prime_lt_100[prime_lt_100[2] + prime_lt_100[0]];
    int index_c = prime_lt_100[2] + prime_lt_100[0];
    printf("(c) prime_lt_100[%d]: %d\n", index_c, prime_lt_100[index_c]);

    // (d) prime_lt_100[6]=prime_lt_100[6] + prime_lt_100[16];
    int sum_d = prime_lt_100[6] + prime_lt_100[16];
    prime_lt_100[6] = sum_d;
    printf("(d) Updated prime_lt_100[6]: %d\n", prime_lt_100[6]);

    return 0;
}
