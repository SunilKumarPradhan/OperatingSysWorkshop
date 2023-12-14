#include <stdio.h>

struct out {
    char ch[10];
    char *str;
};

struct b {
    char *c;
    struct out o;
};

int main() {
    struct b s2 = {"ODISHA", {"KHURDA", "JOYDEV"}};

    printf("%s %s %s\n", s2.c, s2.o.str, s2.o.ch);
    printf("%s %s\n", ++s2.c, ++s2.o.str);

    return 0;
}
