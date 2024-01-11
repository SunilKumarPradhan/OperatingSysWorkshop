#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
//#include <sys/wait.h>

void processP1(int *shrd) {
    int x;
    x = *shrd;
    x = x + 1;
    sleep(1);
    *shrd = x;
}

void processP2(int *shrd) {
    int y;
    y = *shrd;
    y = y - 1;
    sleep(1);
    *shrd = y;
}

int main() {
    int shrd = 0;

    // Case 1: Execute P1 first, then P2
    pid_t pid1 = fork();

    if (pid1 == 0) {
        // Child process (P1)
        processP1(&shrd);
        exit(0);
    } else if (pid1 > 0) {
        // Parent process
        pid_t pid2 = fork();

        if (pid2 == 0) {
            // Child process (P2)
            processP2(&shrd);
            exit(0);
        } else if (pid2 > 0) {
            // Parent process
            waitpid(pid1, NULL, 0);
            waitpid(pid2, NULL, 0);
            printf("Case 1 Result: %d\n", shrd);
        } else {
            perror("fork");
            exit(EXIT_FAILURE);
        }
    } else {
        perror("fork");
        exit(EXIT_FAILURE);
    }

    // Reset shared variable for Case 2
    shrd = 0;

    // Case 2: Execute P2 first, then P1
    pid_t pid3 = fork();

    if (pid3 == 0) {
        // Child process (P2)
        processP2(&shrd);
        exit(0);
    } else if (pid3 > 0) {
        // Parent process
        pid_t pid4 = fork();

        if (pid4 == 0) {
            // Child process (P1)
            processP1(&shrd);
            exit(0);
        } else if (pid4 > 0) {
            // Parent process
            waitpid(pid3, NULL, 0);
            waitpid(pid4, NULL, 0);
            printf("Case 2 Result: %d\n", shrd);
        } else {
            perror("fork");
            exit(EXIT_FAILURE);
        }
    } else {
        perror("fork");
        exit(EXIT_FAILURE);
    }

    return 0;
}
