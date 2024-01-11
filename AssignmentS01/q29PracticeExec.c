// PracticeExec.c
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
// #include <sys/wait.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        // Child process
        printf("Child Process - Executing MulThree.c\n");

        // Execute MulThree.c
        execl("./MulThree", "./MulThree", NULL);

        // If execl fails
        perror("execl");
        exit(EXIT_FAILURE);
    } else if (pid > 0) {
        // Parent process
        int status;
        waitpid(pid, &status, 0);

        if (WIFEXITED(status)) {
            printf("Parent Process - Child process terminated with PID %d, Exit Status: %d\n", pid, WEXITSTATUS(status));
        } else {
            printf("Parent Process - Child process did not terminate normally.\n");
        }
    } else {
        fprintf(stderr, "Fork failed.\n");
        exit(EXIT_FAILURE);
    }

    return 0;
}
