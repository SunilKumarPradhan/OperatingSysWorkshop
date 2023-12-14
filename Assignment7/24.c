#include <stdio.h>

int main() {
    void *p;
    //int *i = 20; 
    int i = 20;
    p = &i;     
    void *q = p;
    printf("%d %d %d\n", i, *(int *)p, *(int *)q); 
    return 0;
}
