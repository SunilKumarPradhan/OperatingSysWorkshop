#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t c1 = 1, c2 = 1;

    c1 = fork();
    
    if (c1 != 0) {
        // This block is executed by the parent process (main process)
        c2 = fork();
        
        if (c2 == 0) {
            // This block is executed by the child process created by c2
            fork();
            printf("1\n");
        }
    }

    return 0;
}
/*
    P1
   / \
  P2  P3
       \
        P4

*/