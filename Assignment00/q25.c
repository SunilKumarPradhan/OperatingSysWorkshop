#include <stdio.h>

int main() {
    int num;
    printf("Enter a number:");
    scanf("%2d", &num);
    printf("number=%d", num);
    return 0;
}
/*the program takes user input and prints the input value, but it only considers the first two digits if more than two digits are entered.*/