#include <stdio.h>
#include <unistd.h>

int main() {
    fork(); 
    fork() && fork() || fork(); 
    fork();
    printf("guess\n"); 
    return 0;
}
/*
            P1
           / \
         P2   P9
        / \
      P3  P10
     /
    P4
   /
  P5
 / \
P6 P7
   /
  P8

*/