#include <stdio.h>
#include <unistd.h>

int main() {
    fork(); 
    fork() + fork(); 
    fork();
    printf("doing!\n"); 
    return 0;
}
/*
            P1
           / \
         P2   P9
        / \    \
      P3  P10   P11
     / \       /   \
    P4 P12   P13   P14
   /  \
  P5   P15
 / \
P6 P16

*/