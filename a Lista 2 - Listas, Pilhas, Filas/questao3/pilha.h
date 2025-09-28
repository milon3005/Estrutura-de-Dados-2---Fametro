
#ifndef PILHA_H
#define PILHA_H
#include <stdbool.h>

typedef struct Frame{char func[48];int sp;struct Frame*baixo;}Frame;
typedef struct{Frame*topo;}Pilha;

void criarPilha(Pilha*);
bool pushFrame(Pilha*,const char*,int);
bool popFrame(Pilha*,Frame*);
bool topFrame(Pilha*,Frame*);
bool vazia(Pilha*);
void freePilha(Pilha*);

#endif
