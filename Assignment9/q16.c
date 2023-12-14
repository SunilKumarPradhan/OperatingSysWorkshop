#include <stdio.h>

typedef struct {
    char name[30];
    double diameter;
    int moons;
    double or_time, ro_time;
} planet_t;

int main() {
    // Declare and initialize an instance of planet_t
    planet_t earth = {"Earth", 12756.2, 1, 365.25, 24};

    // Access and print information about the planet
    printf("Planet Name: %s\n", earth.name);
    printf("Diameter: %.2f km\n", earth.diameter);
    printf("Number of Moons: %d\n", earth.moons);
    printf("Orbital Time: %.2f days\n", earth.or_time);
    printf("Rotational Time: %.2f hours\n", earth.ro_time);

    return 0;
}
