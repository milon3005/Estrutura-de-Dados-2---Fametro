#include <stdio.h>

int main() {
    int numero = 50;
    int *ponteiro = &numero;

    printf("Valor da variavel: %d\n", numero);
    printf("Endereco da variavel: %p\n", (void*)&numero);
    printf("Valor guardado no ponteiro: %p\n", (void*)ponteiro);
    printf("Conteudo apontado: %d\n", *ponteiro);

    return 0;
}
