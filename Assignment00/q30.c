#include <stdio.h>

int main() {
    int i, j, k;

    // (i) Decimal numbers
    printf("Enter decimal values for i, j, and k: ");
    scanf("%d %d %d", &i, &j, &k);
    printf("Values: i = %d, j = %d, k = %d\n", i, j, k);

    // (ii) Decimal, octal, and hexadecimal integers
    printf("Enter values for i (decimal), j (octal), and k (hexadecimal): ");
    scanf("%d %o %x", &i, &j, &k);
    printf("Values: i = %d, j = %o, k = %x\n", i, j, k);

    // (iii) Hexadecimal numbers and octal integer
    printf("Enter values for i (hexadecimal), j (hexadecimal), and k (octal): ");
    scanf("%x %x %o", &i, &j, &k);
    printf("Values: i = %x, j = %x, k = %o\n", i, j, k);

    return 0;
}
