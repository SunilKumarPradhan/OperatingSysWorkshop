#include <stdio.h>
#include <unistd.h>

int main() {
    int pid, pid2;
    pid = fork();

    if (pid) {
        // Parent process
        pid2 = fork();
        printf("I\n");
    } else {
        // Child process
        printf("C\n");
        pid2 = fork();
    }

    return 0;
}
/*
            P1
           / \
         P2   P5
        /
      P3
     /
    P4

*/