#include <stdio.h>
#include <unistd.h>

int main() {
    if (fork()) {
        if (!fork()) {
            fork();
            printf("S ");
        } else {
            printf("T ");
        }
    } else {
        printf("D ");
    }

    printf("A ");
    return 0;
}
/*
    P1
   / \
  P2  P3
 /
P4

*/