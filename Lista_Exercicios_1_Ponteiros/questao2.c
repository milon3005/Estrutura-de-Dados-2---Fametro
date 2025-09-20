#include <stdio.h>

void encontrarMaiorMenor(int *array, int tamanho, int *maior, int *menor) {
    *maior = array[0];
    *menor = array[0];
    for (int i = 1; i < tamanho; i++) {
        if (array[i] > *maior) *maior = array[i];
        if (array[i] < *menor) *menor = array[i];
    }
}

int main() {
    int qtd;
    printf("Quantos numeros deseja digitar? ");
    scanf("%d", &qtd);

    int numeros[qtd];
    for (int i = 0; i < qtd; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    int maior, menor;
    encontrarMaiorMenor(numeros, qtd, &maior, &menor);

    printf("Maior valor = %d\n", maior);
    printf("Menor valor = %d\n", menor);
    return 0;
}
