#include <stdio.h>

int main() {
    int b = 65;
    //void p = b; 
    //printf("%d", p);
    void *p = &b;
    printf("%d", *(int *)p);
    return 0;
}
