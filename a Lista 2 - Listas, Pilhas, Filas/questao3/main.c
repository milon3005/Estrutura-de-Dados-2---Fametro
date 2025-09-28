
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

int main(){
    Pilha p; criarPilha(&p);
    char cmd[20];
    while(1){
        printf(">> ");
        if(scanf("%19s",cmd)!=1) break;
        if(strcmp(cmd,"CALL")==0){
            char f[48]; int sp; scanf("%47s %d",f,&sp); pushFrame(&p,f,sp);
        } else if(strcmp(cmd,"RET")==0){
            Frame fr; if(popFrame(&p,&fr)) printf("Retorno %s\n",fr.func); else printf("Vazia\n");
        } else if(strcmp(cmd,"PEEK")==0){
            Frame fr; if(topFrame(&p,&fr)) printf("Topo %s %d\n",fr.func,fr.sp); else printf("Vazia\n");
        } else if(strcmp(cmd,"TRACE")==0){
            Frame*cur=p.topo; int i=0; while(cur){printf("%d %s %d\n",i,cur->func,cur->sp); cur=cur->baixo; i++;}
        } else if(strcmp(cmd,"EXIT")==0){freePilha(&p);break;}
    }
}
