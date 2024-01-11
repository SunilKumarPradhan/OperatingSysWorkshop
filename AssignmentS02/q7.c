#include <stdio.h>
#include <pthread.h>

#define ITERATIONS 5  // Adjust the number of iterations as needed

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond1 = PTHREAD_COND_INITIALIZER;
pthread_cond_t cond2 = PTHREAD_COND_INITIALIZER;
pthread_cond_t cond3 = PTHREAD_COND_INITIALIZER;

void *thread1(void *arg) {
    for (int i = 0; i < ITERATIONS; ++i) {
        pthread_mutex_lock(&mutex);
        printf("X");
        pthread_cond_signal(&cond2);
        pthread_cond_wait(&cond1, &mutex);
        pthread_mutex_unlock(&mutex);
    }
    return NULL;
}

void *thread2(void *arg) {
    for (int i = 0; i < ITERATIONS; ++i) {
        pthread_mutex_lock(&mutex);
        pthread_cond_wait(&cond2, &mutex);
        printf("X");
        pthread_cond_signal(&cond3);
        pthread_mutex_unlock(&mutex);
    }
    return NULL;
}

void *thread3(void *arg) {
    for (int i = 0; i < ITERATIONS; ++i) {
        pthread_mutex_lock(&mutex);
        pthread_cond_wait(&cond3, &mutex);
        printf("Y");
        pthread_cond_signal(&cond1);
        pthread_mutex_unlock(&mutex);
    }
    return NULL;
}

int main() {
    pthread_t t1, t2, t3;

    pthread_create(&t1, NULL, thread1, NULL);
    pthread_create(&t2, NULL, thread2, NULL);
    pthread_create(&t3, NULL, thread3, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    pthread_join(t3, NULL);

    printf("\n");
    return 0;
}
