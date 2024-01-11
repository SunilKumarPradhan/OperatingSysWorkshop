#include <stdio.h>
#include <unistd.h>

int main() {
    fork() && fork();
    printf("Able to\n");
    return 0;
}
/*
            P1
           / \
         P2   P4
        /
      P3

*/