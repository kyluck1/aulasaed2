#include <stdio.h>
#include <stdlib.h>


typedef struct fila t_fila;
struct fila{
    void* *elems;
    int tamanho;
    int inicio;
    int fim;
    int ocupacao;
    short e->infinita;
};

t_fila* criar_fila(int tamanho){
    t_fila* f = malloc(sizeof(t_fila));
    f->e_infinita = (tamanho<=0?1:0);
    f->tamanho = (tamanho<=0?1:tamanho);
    f->inicio = 0;
    f->fim = 0;
    f->ocupacao = 0

    f->elems = malloc(sizeof(void*)*f->tamanho);

    return f;
}

void enfileirar(t_fila* f, void* elem){
    
    if(f->e_infinita && (f->ocupacao == f->tamanho)){
        f->tamanho = f->tamanho*2;
        f->elems = realloc(f->elems, sizeof(void* )*f->tamanho);
    } 

    if(f->ocupacao < f->tamanho){
        f->elems[f->fim] = elem;
        f->fim = (f->fim+1)%f->tamanho;
        f->ocupacao++;
    }

}

void* desenfileirar(t_fila* f){
    void* elem = f->elems[f->inicio];
    f->inicio = (f->inicio +1) % f->tamanho;
    f->ocupacao--;
    return elem; 
}

void* primeiro_fila(t_fila* f){
    void* primeiro
    if(f!=NULL && (f->ocupacao>0)){
        primeiro = f->elems[f->inicio];
    }
    return primeiro;
}

int tamanho_fila(t_fila* f){
    if(f!=NULL){
        return f->tamanho;
    }
}

int ocupacao_fila(t_fila* f){
    if(f!=NULL){
        return f->ocupacao;
    }
}

