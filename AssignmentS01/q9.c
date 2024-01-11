#include <stdio.h>
#include <unistd.h>

int main() {
    fork() && fork(); 
    fork() || fork(); 
    printf("Hi\n"); 
    return 0;
}
/*
            P1
           / \
         P2   P7
        / \
      P3  P8
     /
    P4
   /
  P5
 /
P6

*/