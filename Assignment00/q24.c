#include <stdio.h>

int main() {
    int sr = 100, pr = 100;

    sr = scanf("Me a scanner");

    pr = printf("scanf returns=%d\n", sr);
    printf("printf returns::%d\n", pr);

    return 0;
}
/*The printf function is used for output. It prints the string "scanf returns=0\n" and returns the number of characters printed, which is 16 in this case. So, pr is set to 16.*/