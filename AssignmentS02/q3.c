#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <semaphore.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <pthread.h>

int account_balance = 100;
sem_t *mutex; // Unnamed semaphore

void *husband_withdraw(void *arg) {
    int amount = 30;

    // Wait for the mutex (acquire the semaphore)
    sem_wait(mutex);

    printf("Husband initiating withdrawal of $%d\n", amount);

    // Simulate withdrawal
    int current_balance = account_balance;
    sleep(1);  // Simulating some processing time
    account_balance = current_balance - amount;

    printf("Husband completed withdrawal. New balance: $%d\n", account_balance);

    // Release the mutex (release the semaphore)
    sem_post(mutex);

    return NULL;
}

void *wife_deposit(void *arg) {
    int amount = 20;

    // Wait for the mutex (acquire the semaphore)
    sem_wait(mutex);

    printf("Wife initiating deposit of $%d\n", amount);

    // Simulate deposit
    int current_balance = account_balance;
    sleep(1);  // Simulating some processing time
    account_balance = current_balance + amount;

    printf("Wife completed deposit. New balance: $%d\n", account_balance);

    // Release the mutex (release the semaphore)
    sem_post(mutex);

    return NULL;
}

int main() {
    pthread_t husband_thread, wife_thread;

    // Initialize unnamed semaphore
    mutex = sem_open("/my_sem", O_CREAT | O_EXCL, 0666, 1);
    if (mutex == SEM_FAILED) {
        perror("sem_open");
        exit(EXIT_FAILURE);
    }

    // Create threads for husband and wife
    pthread_create(&husband_thread, NULL, husband_withdraw, NULL);
    pthread_create(&wife_thread, NULL, wife_deposit, NULL);

    // Wait for threads to complete
    pthread_join(husband_thread, NULL);
    pthread_join(wife_thread, NULL);

    // Close and unlink the semaphore
    sem_close(mutex);
    sem_unlink("/my_sem");

    printf("Final account balance: $%d\n", account_balance);

    return 0;
}
/*
The sem_wait function is used to acquire the semaphore (decrementing its value). If the semaphore is already 0 (acquired by another process/thread), it will wait until it becomes available.
The sem_post function is used to release the semaphore (incrementing its value), allowing other processes/threads to acquire it.
This ensures that only one thread can access the critical section (deposit or withdrawal) at a time, preventing a race condition. The semaphore is initialized with an initial value of 1, making it a binary semaphore for mutual exclusion.



To avoid the race condition using semaphores, you can use named and unnamed POSIX semaphores. Named semaphores can be used for inter-process communication, while unnamed semaphores are suitable for synchronization between threads within a single process. Below is an example using both named and unnamed semaphores to synchronize deposit and withdrawal operations on a shared account balance.

*/