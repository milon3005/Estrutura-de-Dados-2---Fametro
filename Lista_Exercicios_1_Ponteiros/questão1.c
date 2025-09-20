#include <stdio.h>

void trocar(int *a, int *b) {
    int troca = *a;
    *a = *b;
    *b = troca;
}

int main() {
    int primeiro, segundo;
    printf("Digite dois inteiros separados por espaço: ");
    scanf("%d %d", &primeiro, &segundo);

    printf("Antes da troca: %d e %d\n", primeiro, segundo);
    trocar(&primeiro, &segundo);
    printf("Depois da troca: %d e %d\n", primeiro, segundo);

    return 0;
}
