int main() {
    int n = 4, m = 3;
    int a[n][m];
    int (*p)[m] = a;
    p = p + 1;
    (*p)[2] = 100;
    n = p - a;

    printf("A.%d\n", n);         /*----(A) */
    printf("B.%d\n", (*p)[2]);    /*----(B) */
    printf("C.%d\n", *((*p) + 2)); /*----(C) */
    printf("D.%d\n", *(a[1] + 2)); /*----(D) */
    printf("E.%d\n", *(*p + 2));   /*----(E) */
    printf("F.%d\n", *(p[0] + 2)); /*----(F) */

    return 0;
}
