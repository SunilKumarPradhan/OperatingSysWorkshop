#include <stdio.h>
int i = 5;
extern int j; // Declaration

int main() {
    printf("\ni=%d", i);

     // Definition
    printf("\nj=%d", j);

    return 0;
}

int j = 12; // Initialization
