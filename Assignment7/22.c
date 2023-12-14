#include <stdio.h>
#include <stdlib.h>

void fun() {
    int *q = (int *)malloc(sizeof(int));
    *q = 20;
}

int main() {
    int *p;
    int *r = NULL;

    // The function fun() is called, which allocates and assigns a value to memory, but the memory is not used in the main function
    fun();
    return 0;
}
/*(i) p is a wild pointer:

Correct. The pointer p in the main function is declared but not initialized, making it a wild pointer.
(ii) r is a NULL pointer:

Correct. The pointer r is explicitly assigned the value NULL, making it a NULL pointer.
(iii) q is a dangling pointer:

Incorrect. The pointer q is allocated memory in the fun function but is freed before the function exits. Therefore, it's not a dangling pointer within the function.
(iv) p is a dangling pointer:

Incorrect. The pointer p is declared but not used, and it is not pointing to any memory. It is not a dangling pointer.
(v) fun() is making memory leak:

Correct. The fun function allocates memory for an integer but does not free it before exiting. This results in a memory leak.
Correct statements: (i), (ii), and (v).*/