
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estoque.h"

int main(){
    Produto *lista=NULL;
    char cmd[20];
    printf("Controle de Estoque v2\n");
    while(1){
        printf(">> ");
        if(scanf("%19s",cmd)!=1) break;
        if(strcmp(cmd,"ADD")==0){
            Produto p; scanf("%15s",p.codigo);
            getchar();
            scanf(" \"%63[^\"]\" %d %f",p.nome,&p.qtd,&p.preco);
            lista=addProduto(lista,p);
        } else if(strcmp(cmd,"UPD")==0){
            char c[16]; int d; scanf("%15s %d",c,&d);
            lista=modificarQtd(lista,c,d);
        } else if(strcmp(cmd,"DEL")==0){
            char c[16]; scanf("%15s",c);
            lista=removerProd(lista,c);
        } else if(strcmp(cmd,"FIND")==0){
            char c[16]; scanf("%15s",c);
            Produto *r=buscarProd(lista,c);
            if(r) printf("Produto: %s %s qtd=%d preco=%.2f\n",r->codigo,r->nome,r->qtd,r->preco);
            else printf("Nao encontrado\n");
        } else if(strcmp(cmd,"LIST")==0){
            listarProds(lista);
        } else if(strcmp(cmd,"REL")==0){
            int total=0; float soma=0; Produto *maior=NULL;
            for(Produto*aux=lista;aux;aux=aux->prox){
                total++; soma+=aux->qtd*aux->preco;
                if(!maior||aux->qtd*aux->preco>maior->qtd*maior->preco) maior=aux;
            }
            printf("Itens: %d Valor: %.2f\n",total,soma);
            if(maior) printf("Maior: %s %s %.2f\n",maior->codigo,maior->nome,maior->qtd*maior->preco);
        } else if(strcmp(cmd,"EXIT")==0){
            lista=liberarTudo(lista); break;
        } else printf("Invalido\n");
    }
}
