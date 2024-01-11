#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t p1, p2;
    p2 = 0;
    
    p1 = fork();
    
    if (p1 == 0)
        p2 = fork();

    if (p2 > 0)
        fork();

    printf("done\n");

    return 0;
}
/*
      P1
      |
      P2
     / \
    P3  P4
   / \  
  P5  P6

*/