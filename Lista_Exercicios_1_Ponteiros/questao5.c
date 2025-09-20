#include <stdio.h>

void copiarString(char *origem, char *destino) {
    while (*origem != '\0') {
        *destino = *origem;
        origem++;
        destino++;
    }
    *destino = '\0';
}

int main() {
    char texto1[100], texto2[100];
    printf("Digite uma frase: ");
    fgets(texto1, 100, stdin);

    copiarString(texto1, texto2);

    printf("Copia realizada: %s\n", texto2);
    return 0;
}
