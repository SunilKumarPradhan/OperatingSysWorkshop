#include <stdio.h>

int main() {
    int Ia=345;
    float Fb=4.5;
    char Chvar='Z';

    printf("The value of Ia is %d\n", Ia);
    printf("The address of Ia is %p\n", &Ia);
    printf("The value of Fb is %f\n", Fb);
    printf("The address of Fb is %p\n", &Fb);
    printf("The value of Chvar is %c\n", Chvar);
    printf("The address of Chvar is %p\n", &Chvar);
}