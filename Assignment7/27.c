#include <stdio.h>


void demo() {
    printf("SS");
}
int main() {
    void demo();
    void (*fun)();
    fun = demo;
    (*fun)();
    fun();
    return 0;
}
