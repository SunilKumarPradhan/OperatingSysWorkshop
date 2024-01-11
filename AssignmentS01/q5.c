#include <stdio.h>
#include <unistd.h>

int main() {
    fork(); 
    fork() && fork(); 
    fork();
    printf("Got!!!\n"); 
    return 0;
}
/*
            P1
           / \
         P2   P8
        / \    \
      P3  P9   P10
     / \       /  \
    P4 P11   P12   P13
   /  \
  P5   P14
 / \
P6 P15

*/