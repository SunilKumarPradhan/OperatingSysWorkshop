#include <stdio.h>
#include <unistd.h>

void createFigureB() {
    printf("Root: PID=%d, Parent ID=%d\n", getpid(), getppid());

    for (int i = 0; i < 2; i++) {
        pid_t childPid = fork();
        
        if (childPid == 0) {
            printf("Child%d: PID=%d, Parent ID=%d\n", i + 1, getpid(), getppid());

            // Additional fork in Child2
            if (i == 1) {
                pid_t grandchildPid = fork();

                if (grandchildPid == 0) {
                    printf("Grandchild: PID=%d, Parent ID=%d\n", getpid(), getppid());
                    // Grandchild doesn't create more processes
                    break;
                }
            }

            break;  // Children should not create more processes
        }
    }
}

int main() {
    createFigureB();
    return 0;
}
/*
    Root
   / \
Child1 Child2
         |
   Grandchild

*/