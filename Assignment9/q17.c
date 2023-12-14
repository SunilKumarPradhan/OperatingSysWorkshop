#include <stdio.h>

typedef struct {
    char name[30];
    double diameter;
    int moons;
    double or_time, ro_time;
} planet_t;

int main() {
    // Initialize a variable of type planet_t with values for Jupiter
    planet_t jupiter = {"Jupiter", 142.34, 16, 11.9, 9.23};

    // Access and print information about Jupiter
    printf("Planet Name: %s\n", jupiter.name);
    printf("Diameter: %.2f km\n", jupiter.diameter);
    printf("Number of Moons: %d\n", jupiter.moons);
    printf("Orbital Time: %.2f years\n", jupiter.or_time);
    printf("Rotational Time: %.2f hours\n", jupiter.ro_time);

    return 0;
}
