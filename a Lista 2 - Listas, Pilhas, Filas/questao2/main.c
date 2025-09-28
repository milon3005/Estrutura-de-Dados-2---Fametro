
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fila.h"

int main(){
    Fila f; initFila(&f);
    int estoque; printf("Ingressos: "); scanf("%d",&estoque);
    char cmd[20];
    while(1){
        printf(">> ");
        if(scanf("%19s",cmd)!=1) break;
        if(strcmp(cmd,"ADD")==0){
            Cliente c; scanf("%23s %d",c.id,&c.qtd); enqueue(&f,c);
        } else if(strcmp(cmd,"START")==0){
            while(!filaVazia(&f)&&estoque>0){
                Cliente c; dequeue(&f,&c);
                if(c.qtd<=estoque){printf("%s comprou %d\n",c.id,c.qtd); estoque-=c.qtd;}
                else{printf("%s pediu %d, restam %d. Aceita? (S/N): ",c.id,c.qtd,estoque);
                    char r; scanf(" %c",&r);
                    if(r=='S'||r=='s'){printf("Parcial %d\n",estoque);estoque=0;}
                    else printf("Nao atendido\n");}
            }
        } else if(strcmp(cmd,"REL")==0){
            printf("Restante %d\n",estoque);
        } else if(strcmp(cmd,"EXIT")==0){clearFila(&f);break;}
    }
}
