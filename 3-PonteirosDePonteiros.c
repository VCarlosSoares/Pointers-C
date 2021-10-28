#include <stdio.h>
#include <stdlib.h>

int main () {
    int x = 5;
    int *p = &x;
    int **q = &p;
    int ***r = &q;

    printf("&x = %d\n", &x);
    printf("*p = %d\n", *p);
    printf("*q = %d\n", *q);
    printf("**q = %d\n", **q);
    printf("**r = %d\n", **r);
    printf("***r = %d\n", ***r);

    ***r = 10;
    printf("\n***r = 10. x = %d\n", x);

    return 0;
}