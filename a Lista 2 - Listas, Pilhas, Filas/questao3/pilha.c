
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

void criarPilha(Pilha*p){p->topo=NULL;}

bool pushFrame(Pilha*p,const char*f,int sp){
    Frame*n=malloc(sizeof(Frame)); if(!n) return false;
    strcpy(n->func,f); n->sp=sp; n->baixo=p->topo; p->topo=n; return true;
}

bool popFrame(Pilha*p,Frame*out){
    if(!p->topo) return false;
    Frame*t=p->topo; *out=*t; p->topo=t->baixo; free(t); return true;
}

bool topFrame(Pilha*p,Frame*out){ if(!p->topo) return false; *out=*p->topo; return true; }
bool vazia(Pilha*p){return p->topo==NULL;}

void freePilha(Pilha*p){Frame tmp; while(popFrame(p,&tmp));}
