
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estoque.h"

static Produto* criar(Produto p){
    Produto* n=malloc(sizeof(Produto));
    if(!n) return NULL;
    *n=p; n->prox=NULL; return n;
}

Produto* addProduto(Produto*L,Produto p){
    Produto *ant=NULL,*cur=L;
    while(cur&&strcmp(cur->codigo,p.codigo)<0){ant=cur;cur=cur->prox;}
    if(cur&&strcmp(cur->codigo,p.codigo)==0){cur->qtd+=p.qtd;cur->preco=p.preco;return L;}
    Produto*n=criar(p); if(!ant){n->prox=L;return n;} ant->prox=n; n->prox=cur; return L;
}

Produto* removerProd(Produto*L,const char*cod){
    Produto*ant=NULL,*cur=L;
    while(cur&&strcmp(cur->codigo,cod)!=0){ant=cur;cur=cur->prox;}
    if(!cur) return L;
    if(!ant) L=cur->prox; else ant->prox=cur->prox;
    free(cur); return L;
}

Produto* modificarQtd(Produto*L,const char*cod,int d){
    Produto* p=buscarProd(L,cod);
    if(p){ if(p->qtd+d>=0) p->qtd+=d; else printf("Erro qtd negativa\n"); }
    return L;
}

Produto* buscarProd(Produto*L,const char*cod){
    for(Produto*aux=L;aux;aux=aux->prox) if(strcmp(aux->codigo,cod)==0) return aux;
    return NULL;
}

void listarProds(Produto*L){
    for(Produto*aux=L;aux;aux=aux->prox)
        printf("[%s] %s qtd=%d preco=%.2f\n",aux->codigo,aux->nome,aux->qtd,aux->preco);
}

Produto* liberarTudo(Produto*L){
    while(L){Produto*t=L;L=L->prox;free(t);} return NULL;
}
