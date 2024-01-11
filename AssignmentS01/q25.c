#include <stdio.h>
#include <unistd.h>

int main() {
    printf("PID=%d, Parent ID=%d, Fork()=%d\n", getpid(), getppid(), fork());
    printf("PID=%d, Parent ID=%d, Fork()=%d\n", getpid(), getppid(), fork());
    printf("PID=%d, Parent ID=%d\n", getpid(), getppid());
    
    return 0;
}
/*
    P1
   / \
  P2  P3

*/