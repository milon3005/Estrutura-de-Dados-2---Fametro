
#ifndef FILA_H
#define FILA_H
#include <stdbool.h>

typedef struct Cliente{char id[24];int qtd;struct Cliente*prox;}Cliente;
typedef struct{Cliente*ini,*fim;}Fila;

void initFila(Fila*);
void enqueue(Fila*,Cliente);
bool dequeue(Fila*,Cliente*);
bool filaVazia(Fila*);
void clearFila(Fila*);

#endif
