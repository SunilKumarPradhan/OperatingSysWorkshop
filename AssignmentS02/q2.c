#include <stdio.h>
//#include <pthread.h>

int account_balance = 100;

void *husband_withdraw(void *arg) {
    int amount = 30;
    printf("Husband initiating withdrawal of $%d\n", amount);

    // Simulate withdrawal
    int current_balance = account_balance;
    sleep(1);  // Simulating some processing time
    account_balance = current_balance - amount;

    printf("Husband completed withdrawal. New balance: $%d\n", account_balance);

    return NULL;
}

void *wife_deposit(void *arg) {
    int amount = 20;
    printf("Wife initiating deposit of $%d\n", amount);

    // Simulate deposit
    int current_balance = account_balance;
    sleep(1);  // Simulating some processing time
    account_balance = current_balance + amount;

    printf("Wife completed deposit. New balance: $%d\n", account_balance);

    return NULL;
}

int main() {
    pthread_t husband_thread, wife_thread;

    // Create threads for husband and wife
    pthread_create(&husband_thread, NULL, husband_withdraw, NULL);
    pthread_create(&wife_thread, NULL, wife_deposit, NULL);

    // Wait for threads to complete
    pthread_join(husband_thread, NULL);
    pthread_join(wife_thread, NULL);

    printf("Final account balance: $%d\n", account_balance);

    return 0;
}
