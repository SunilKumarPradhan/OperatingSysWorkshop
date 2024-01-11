#include <stdio.h>
#include <unistd.h>

pid_t add(pid_t a, pid_t b) {
    return a + b;
}

int main(void) {
    pid_t x = 10;
    
    printf("%d\n", x);

    x = add(fork(), fork());

    printf("%d\n", x);

    return 0;
}
/*
    P1
   / \
 P2   P3

*/