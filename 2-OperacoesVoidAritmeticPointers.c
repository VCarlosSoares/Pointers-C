#include <stdio.h>
#include <stdlib.h>

int main () {
    int a = 1025;
    int *p = &a;

    //Tamanhos: int    = 4 bytes
    //          char   = 1 byte
    //          float  = 4 bytes
    //          double = 8 bytes

    printf("tamanho tipo inteiro = %d\n", sizeof(int));
    printf("endereco = %d, valor = %d\n", p, *p);
    printf("endereco = %d, valor = %d\n\n", p+1, *(p+1));

    char *p0;
    p0 = (char*) p;
    printf("tamanho tipo char = %d\n", sizeof(char));
    printf("endereco = %d, valor = %d\n", p0, *p0);
    printf("endereco = %d, valor = %d\n\n", p0+1, *(p0+1));
    // 1025 = 00000000 00000000 00000100 00000001
    //           0        0        4        1
    
    void *p1;
    p1 = p;
    //Usando void, eu posso imprimir o endereco, mas nao posso imprimir o valor
    printf("endereco = %d\n", p1);

    return 0;
}