#include <stdio.h>
#include <string.h>

void inverterString(char *str) {
    int inicio = 0;
    int fim = strlen(str) - 1;
    char aux;

    while (inicio < fim) {
        aux = str[inicio];
        str[inicio] = str[fim];
        str[fim] = aux;
        inicio++;
        fim--;
    }
}

int main() {
    char palavra[120];
    printf("Digite uma palavra: ");
    fgets(palavra, 120, stdin);

    palavra[strcspn(palavra, "\n")] = '\0'; /* tira o \n */
    inverterString(palavra);

    printf("Invertida: %s\n", palavra);
    return 0;
}
