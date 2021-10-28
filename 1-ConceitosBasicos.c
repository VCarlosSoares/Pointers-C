#include <stdio.h>
#include <stdlib.h>

int main () {
    int a;
    int *p;

    p = &a;
    a = 5;
    printf("endereco armazenado em p = %d\n", p);
    printf("endereco de a            = %d\n", &a);
    printf("endereco de p            = %d\n", &p);
    printf("valor referenciado por p = %d\n", *p);

    a++;
    printf("%d\n", *p);

    (*p)++;
    printf("%d\n", a);

    return 0;
}
