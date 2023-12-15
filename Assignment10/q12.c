#include <stdio.h>
#include <stdlib.h>
int main() {
    char pmsg[] = "I am in 5th Sem CSE";
    char *amsg = "I am in 5th Sem CSE";

    printf("Type of variable 'pmsg': %s\n", __builtin_typeof(pmsg));
    printf("Type of variable 'amsg': %s\n", __builtin_typeof(amsg));

    return 0;
}
