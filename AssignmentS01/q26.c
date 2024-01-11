#include <stdio.h>
#include <unistd.h>

void createFigureA() {
    printf("Root: PID=%d, Parent ID=%d\n", getpid(), getppid());

    for (int i = 0; i < 3; i++) {
        pid_t childPid = fork();
        
        if (childPid == 0) {
            printf("Child%d: PID=%d, Parent ID=%d\n", i + 1, getpid(), getppid());
            break;  // Children should not create more processes
        }
    }
}

int main() {
    createFigureA();
    return 0;
}


/*
    Root
   / | \
Child1 Child2 Child3


*/