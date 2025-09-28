
#include <stdlib.h>
#include "fila.h"

void initFila(Fila*f){f->ini=f->fim=NULL;}

void enqueue(Fila*f,Cliente c){
    Cliente*n=malloc(sizeof(Cliente)); if(!n) return;
    *n=c; n->prox=NULL;
    if(!f->ini) f->ini=f->fim=n; else {f->fim->prox=n; f->fim=n;}
}

bool dequeue(Fila*f,Cliente*out){
    if(!f->ini) return false;
    Cliente*t=f->ini; *out=*t; f->ini=t->prox; if(!f->ini) f->fim=NULL; free(t); return true;
}

bool filaVazia(Fila*f){return f->ini==NULL;}

void clearFila(Fila*f){Cliente tmp; while(dequeue(f,&tmp));}
