#include <stdio.h>
#include <stdlib.h>

/* Esta funcao na verdade cria uma copia do valor passado por parâmetro
   Ou seja, quando esta funcao, que esta armazenada na memoria Stack, for finalizada, tudo sera apagado
   Alem disso, o valor passado por parametro na origem da chamada permanecera inalterado.
void incrementar(int a) {
    //a = a + 1;
    a++;
    printf("endereco da variavel na funcao incrementar = %d\n", &a);
} */

// Passando o endereco por parametro para o ponteiro, o valor original (que esta na main) sera alterado
// Pois estamos modificando exatamente o valor do endereco da variavel original e nao criando uma copia
void incrementar(int *a) {
    //*a = *a + 1;
    (*a)++;
    printf("endereco da variavel na funcao incrementar = %d\n", &*a);
}

int main () {
    int a = 5;

    printf("endereco da variavel na funcao main = %d\n", &a);

    incrementar(&a);
    printf("a = %d\n", a);

    incrementar(&a);
    printf("a = %d\n", a);

    incrementar(&a);
    printf("a = %d\n", a);

    return 0;
}