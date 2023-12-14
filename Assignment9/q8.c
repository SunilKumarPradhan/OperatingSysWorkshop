#include <stdio.h>

int main() {
    // Define a structure student with members h, w, and m
    struct student {
        int h;
        int w;
        int m;
    };

    // Create an instance s1 of the student structure and initialize its members
    struct student s1 = {20, 40, 50};

    // Create a pointer ptr and assign the address of s1 to it
    struct student *ptr = &s1;

    // Print the value of the member m using pointer arithmetic
    printf("%d\n", *((int *)ptr + 2));

    return 0;
}
