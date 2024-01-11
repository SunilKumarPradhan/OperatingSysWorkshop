#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <semaphore.h>

sem_t sem1, sem2, sem3, sem4, sem5;

void display_message(const char *message) {
    fprintf(stderr, "%s ", message);
}

void child_process(int process_number) {
    sem_wait(&sem1 + process_number - 1);  // Wait for the corresponding semaphore

    switch (process_number) {
        case 1:
            display_message("Coronavirus");
            sem_post(&sem2);
            break;
        case 2:
            display_message("WHO:");
            sem_post(&sem3);
            break;
        case 3:
            display_message("COVID-19");
            sem_post(&sem4);
            break;
        case 4:
            display_message("disease");
            sem_post(&sem5);
            break;
        case 5:
            display_message("pandemic\n");
            break;
        default:
            break;
    }

    exit(0);  // Terminate child process
}

int main() {
    sem_init(&sem1, 0, 0);
    sem_init(&sem2, 0, 0);
    sem_init(&sem3, 0, 0);
    sem_init(&sem4, 0, 0);
    sem_init(&sem5, 0, 0);

    for (int i = 1; i <= 5; ++i) {
        pid_t pid = fork();

        if (pid == -1) {
            perror("fork");
            exit(EXIT_FAILURE);
        } else if (pid == 0) {
            // Child process
            child_process(i);
        }
    }

    // Parent process
    sem_post(&sem1);  // Start the sequence

    // Wait for all child processes to terminate
    for (int i = 0; i < 5; ++i) {
        wait(NULL);
    }

    sem_destroy(&sem1);
    sem_destroy(&sem2);
    sem_destroy(&sem3);
    sem_destroy(&sem4);
    sem_destroy(&sem5);

    return 0;
}
