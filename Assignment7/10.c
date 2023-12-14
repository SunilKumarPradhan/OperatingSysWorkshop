#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = NULL;
    p = (int *)malloc(sizeof(int));
    
        *p = 10;
        free(p);  // Freeing the memory

        int *q;
        q = (int *)malloc(sizeof(int));

        *q = 15;
        printf("%d %d\n", *p, *q);  // Accessing *p after 
    return 0;
}
