#include <stdio.h>
#include <unistd.h>

int main(void) {
    fork();
    fork();
    fork();
    
    printf("ITER\n");
    printf("ITER\n");
    
    return 0;
}
/*
            P1
           / \
         P2   P9
        / \    \
      P3  P6    P10
     / \   \
    P4  P7  P11
   /
  P5

*/