#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

#define N 5 // Number of chairs in the waiting room

sem_t customers, barber, mutex;
int waiting = 0; // Number of customers waiting

void *barber_thread(void *arg) {
    while (1) {
        sem_wait(&customers); // Wait for a customer to arrive
        sem_wait(&mutex);

        waiting--;
        sem_post(&barber); // Signal that the barber is ready to cut hair
        sem_post(&mutex);

        printf("Barber is cutting hair\n");
        sleep(1); // Simulate the time taken to cut hair
    }
    return NULL;
}

void *customer_thread(void *arg) {
    sem_wait(&mutex);

    if (waiting < N) {
        waiting++;
        sem_post(&customers); // Signal the arrival of a customer
        sem_post(&mutex);

        sem_wait(&barber); // Wait for the barber to be ready
        printf("Customer is getting a haircut\n");
    } else {
        sem_post(&mutex);
        printf("Customer left - No available chairs\n");
    }

    return NULL;
}

int main() {
    pthread_t barber_tid, customer_tid;

    sem_init(&customers, 0, 0);
    sem_init(&barber, 0, 0);
    sem_init(&mutex, 0, 1);

    pthread_create(&barber_tid, NULL, barber_thread, NULL);

    // Create customer threads
    for (int i = 0; i < 10; ++i) {
        pthread_create(&customer_tid, NULL, customer_thread, NULL);
        sleep(1); // Simulate time between customer arrivals
    }

    pthread_join(barber_tid, NULL);

    sem_destroy(&customers);
    sem_destroy(&barber);
    sem_destroy(&mutex);

    return 0;
}
