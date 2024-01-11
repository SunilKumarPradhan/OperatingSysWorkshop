#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

sem_t sync_sem;

void *process1(void *arg) {
    printf("Process 1 executes: a;\n");
    
    // Signal that process 1 has executed statement a
    sem_post(&sync_sem);

    return NULL;
}

void *process2(void *arg) {
    // Wait for process 1 to execute statement a
    sem_wait(&sync_sem);

    printf("Process 2 executes: b;\n");

    return NULL;
}

int main() {
    // Initialize the semaphore with an initial value of 0
    if (sem_init(&sync_sem, 0, 0) == -1) {
        perror("sem_init");
        exit(EXIT_FAILURE);
    }

    pthread_t thread1, thread2;

    // Create threads for process 1 and process 2
    pthread_create(&thread1, NULL, process1, NULL);
    pthread_create(&thread2, NULL, process2, NULL);

    // Wait for threads to complete
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    // Destroy the semaphore
    sem_destroy(&sync_sem);

    return 0;
}
/*

sem_init is used to initialize the semaphore sync_sem with an initial value of 0.
sem_post is used in Process 1 to signal that it has executed statement a.
sem_wait is used in Process 2 to wait until Process 1 signals that it has executed statement a.
Once the semaphore is posted by Process 1, Process 2 is allowed to proceed and execute statement b.
*/