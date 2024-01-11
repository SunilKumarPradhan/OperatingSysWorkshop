#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

sem_t S, Q;

void *process1(void *arg) {
    for (;;) {
        sem_wait(&S);
        // Process 1 critical section
        sem_post(&Q);
    }
    return NULL;
}

void *process2(void *arg) {
    for (;;) {
        sem_wait(&Q);
        // Process 2 critical section
        sem_post(&S);
    }
    return NULL;
}

int main() {
    sem_init(&S, 0, 0);
    sem_init(&Q, 0, 0);

    pthread_t thread1, thread2;

    pthread_create(&thread1, NULL, process1, NULL);
    pthread_create(&thread2, NULL, process2, NULL);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    sem_destroy(&S);
    sem_destroy(&Q);

    return 0;
}
//Case (d) S=0, Q=0