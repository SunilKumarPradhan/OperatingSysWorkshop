#include<stdio.h>
#include<stdlib.h>  
void fun(int **q);

int main() {
    int *p = (int *)malloc(sizeof(int));
    *p = 55;
    
    fun(&p);
    printf("%d %p\n", *p, (void *)p);  // Cast p to void* for correct format specifier
    return 0;
}

void fun(int **q) {
    int r = 20;
    **q = r;
    printf("%p\n", *q);  // Cast *q to void* for correct format specifier
}
