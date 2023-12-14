#include <stdio.h>
#include <stdlib.h>

struct auto_t {
  char *comp;
  char *model;
  long omr;

  struct date_t {
    int dom;
    int mom;
    int yom;
    int dop;
    int mop;
    int yop;
  } date;

  struct tank_t {
    double cap;
    double cfl;
  } fule;
};

struct date_t scan_date(int dom, int mom, int yom, int dop, int mop, int yop) {
  struct date_t date = {dom, mom, yom, dop, mop, yop};
  return date;
}

struct tank_t scan_tank(double cap, double cfl) {
  struct tank_t fuel = {cap, cfl};
  return fuel;
}

struct auto_t scan_auto(char *comp, char *name, double omr, struct date_t date,
                        struct tank_t fuel) {
  struct auto_t vehi = {comp, name, omr, date, fuel};
  return vehi;
}

void print_date(struct date_t date) {
  printf("dom - %d-%d-%d & dop - %d-%d-%d ", date.dom, date.mom, date.yom,
         date.dop, date.mop, date.yop);
}

void print_tank(struct tank_t tank) {
  printf("capacity - %lf & current fuel level - %lf ", tank.cap, tank.cfl);
}

void print_auto(struct auto_t data) {
  printf("material - %s, name = %s ", data.comp, data.model);
  print_date(data.date);
  print_tank(data.fule);
}

int main() {
  FILE *file = fopen("Hello.txt", "r");
  char comp[20], name[20];
  long omr;
  int dom, mom, yom, dop, mop, yop;
  double cap, cfl;
  while (!feof(file)) {

    fscanf(file, "%s %s %ld %d %d %d %d %d %d %lf %lf", comp, name, &omr, &dom,
           &mom, &yom, &dop, &mop, &yop, &cap, &cfl);

    struct date_t date = scan_date(dom, mom, yom, dop, mop, yop);
    struct tank_t fuel = scan_tank(cap, cfl);
    struct auto_t vehi = scan_auto(comp, name, omr, date, fuel);
    print_date(date);
    printf("\n");
    print_tank(fuel);
    printf("\n");
    print_auto(vehi);
    printf("\n");
  }
  return 0;
}