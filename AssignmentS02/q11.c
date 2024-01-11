#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

sem_t tobacco_sem, paper_sem, matches_sem, agent_sem;

void *agent_thread(void *arg) {
    while (1) {
        int rand_num = rand() % 3;

        switch (rand_num) {
            case 0:
                sem_post(&tobacco_sem);
                sem_post(&paper_sem);
                printf("Agent places tobacco and paper on the table.\n");
                break;
            case 1:
                sem_post(&paper_sem);
                sem_post(&matches_sem);
                printf("Agent places paper and matches on the table.\n");
                break;
            case 2:
                sem_post(&tobacco_sem);
                sem_post(&matches_sem);
                printf("Agent places tobacco and matches on the table.\n");
                break;
        }

        sem_wait(&agent_sem); // Wait for the smoker to finish smoking
    }
    return NULL;
}

void *smoker_thread(void *ingredient) {
    while (1) {
        sem_wait((sem_t *)ingredient); // Wait for the required ingredient
        sem_wait(&agent_sem); // Wait for the agent to finish placing ingredients

        // Make and smoke a cigarette
        printf("Smoker with %s is rolling and smoking a cigarette.\n", (char *)ingredient);

        sem_post(&agent_sem); // Signal the agent that smoking is done
    }
    return NULL;
}

int main() {
    pthread_t agent_tid, smoker_tids[3];
    char *ingredients[3] = {"tobacco", "paper", "matches"};

    sem_init(&tobacco_sem, 0, 0);
    sem_init(&paper_sem, 0, 0);
    sem_init(&matches_sem, 0, 0);
    sem_init(&agent_sem, 0, 1); // Agent starts first

    pthread_create(&agent_tid, NULL, agent_thread, NULL);

    // Create smoker threads
    for (int i = 0; i < 3; ++i) {
        pthread_create(&smoker_tids[i], NULL, smoker_thread, (void *)ingredients[i]);
    }

    pthread_join(agent_tid, NULL);

    // Join smoker threads (not reached in this example)
    for (int i = 0; i < 3; ++i) {
        pthread_join(smoker_tids[i], NULL);
    }

    sem_destroy(&tobacco_sem);
    sem_destroy(&paper_sem);
    sem_destroy(&matches_sem);
    sem_destroy(&agent_sem);

    return 0;
}
