#include <stdio.h>
#include <ctype.h>

void contarVogaisConsoantes(char *str, int *vogais, int *consoantes) {
    *vogais = *consoantes = 0;
    while (*str != '\0') {
        char letra = tolower(*str);
        if (letra >= 'a' && letra <= 'z') {
            if (letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u')
                (*vogais)++;
            else
                (*consoantes)++;
        }
        str++;
    }
}

int main() {
    char frase[150];
    int v, c;

    printf("Digite um texto: ");
    fgets(frase, 150, stdin);

    contarVogaisConsoantes(frase, &v, &c);

    printf("Quantidade de vogais: %d\n", v);
    printf("Quantidade de consoantes: %d\n", c);
    return 0;
}
