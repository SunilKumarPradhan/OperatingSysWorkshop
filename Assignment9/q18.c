 #include <stdio.h>

typedef struct {
    char name[30];
    double diameter;
    int moons;
    double or_time, ro_time;
} planet_t;

int main() {
    planet_t jupiter; // Declare a variable of type planet_t
    planet_t *ptr = &jupiter; // Declare a pointer to planet_t and point it to jupiter

    // Initialize structure components using the pointer
    ptr->name[0] = 'J';
    ptr->name[1] = 'u';
    ptr->name[2] = 'p';
    ptr->name[3] = 'i';
    ptr->name[4] = 't';
    ptr->name[5] = 'e';
    ptr->name[6] = 'r';
    ptr->name[7] = '\0'; // Null-terminate the string
    ptr->diameter = 142.34;
    ptr->moons = 16;
    ptr->or_time = 11.9;
    ptr->ro_time = 9.23;

    // Access and print information about Jupiter using the pointer
    printf("Planet Name: %s\n", ptr->name);
    printf("Diameter: %.2f km\n", ptr->diameter);
    printf("Number of Moons: %d\n", ptr->moons);
    printf("Orbital Time: %.2f years\n", ptr->or_time);
    printf("Rotational Time: %.2f hours\n", ptr->ro_time);

    return 0;
}
