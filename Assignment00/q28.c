#include <stdio.h>

int main() {
    int i = 10, m = 10;
    printf("%d", printf("%d %d ", i, m));
    return 0;
}
/*The reason for this output is that the inner printf prints the characters and returns the number of characters printed, which is then used as the argument for the outer printf, resulting in the output of 6.*/