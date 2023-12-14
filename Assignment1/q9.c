#include <stdio.h>

int main() {
    int p = 100, q = 50;
    int ans;

    // What value is assigned to the type int variable ans
    // in this statement if the value of p is 100 and q is 50?
    ans = (p > 95) + (q < 95);

    printf("Value assigned to ans: %d\n", ans);

    return 0;
}
