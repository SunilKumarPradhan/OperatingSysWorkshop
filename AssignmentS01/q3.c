#include <stdio.h>
#include <unistd.h>

int main(void) {
    printf("A\n");
    fork();
    printf("P\n");
    return 0;
}
/*
A
P
P
*/