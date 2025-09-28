
#ifndef ESTOQUE_H
#define ESTOQUE_H

typedef struct Produto{
    char codigo[16];
    char nome[64];
    int qtd;
    float preco;
    struct Produto *prox;
} Produto;

Produto* addProduto(Produto*,Produto);
Produto* removerProd(Produto*,const char*);
Produto* modificarQtd(Produto*,const char*,int);
Produto* buscarProd(Produto*,const char*);
void listarProds(Produto*);
Produto* liberarTudo(Produto*);

#endif
