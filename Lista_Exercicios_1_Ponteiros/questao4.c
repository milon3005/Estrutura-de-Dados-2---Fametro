#include <stdio.h>

void dobrar(int *n) {
    *n = *n * 2;
}

int main() {
    int valor;
    printf("Digite um numero: ");
    scanf("%d", &valor);

    dobrar(&valor);

    printf("Valor apos dobrar: %d\n", valor);
    return 0;
}
