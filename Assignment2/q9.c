#include <stdio.h>

int main() {
    int watts = 60;  // You can change the value of watts as needed
    int life;

    switch (watts) {
        case 25:
            life = 2500;
            break;
        case 40:
        case 60:
            life = 1000;
            break;
        case 75:
        case 100:
            life = 750;
            break;
        default:
            life = 0;
    }

    printf("Life expectancy: %d hours\n", life);

    return 0;
}
