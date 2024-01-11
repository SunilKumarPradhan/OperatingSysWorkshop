#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
// #include <sys/wait.h>
#include <unistd.h>

#define SIZE 5

int nums[SIZE] = {0, 1, 2, 3, 4};

int main() {
    int i;
    pid_t pid;
    pid = fork();

    if (pid == 0) {
        for (i = 0; i < SIZE; i++) {
            nums[i] *= nums[i] * -i;
            printf("CHILD:%d ", nums[i]); /* LINE X */
        }
    } else if (pid > 0) {
        wait(NULL);
        for (i = 0; i < SIZE; i++)
            printf("PARENT: %d ", nums[i]); /* LINE Y */
    }

    return 0;
}
/*
Output Prediction:
Line X:
The child process (pid == 0) executes the loop, modifying the nums array.
It prints the modified values of nums[i] inside the loop.
The output at Line X will be "CHILD:0 CHILD:-1 CHILD:-8 CHILD:-27 CHILD:-64".
Line Y:
The parent process (pid > 0) waits for the child process to complete using wait(NULL).
After the child process completes, the parent process prints the original values of nums[i].
The output at Line Y will be "PARENT:0 PARENT:1 PARENT:2 PARENT:3 PARENT:4".
*/