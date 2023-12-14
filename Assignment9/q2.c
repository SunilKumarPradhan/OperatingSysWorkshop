struct date {
    int m, d, y;
};

// Corrected structure definition
struct stud {
    char name[20];
    struct stud *p;
    struct date *d;
    int (*fun)(int, int);  // Added the correct syntax for the function pointer
};
