#include<stdlib.h>
#include<stdio.h>

typedef struct No{
    struct No* direita;
    struct No* esquerda;
    int valor;
}No;

typedef struct{
    No* raiz;
}Arvore;

Arvore* cria_arvore(){
    Arvore* arvore = malloc(sizeof(Arvore));
    arvore->raiz = NULL;
    return arvore;
}

No* cria_no(int valor){
    No* no = malloc(sizeof(No));
    no->direita = NULL;
    no->esquerda = NULL;
    no->valor = valor;
    return no;
}
void inserir(No* no, int valor){
    if(no->valor <valor){
        if(no->direita == NULL){
            no->direita = cria_no(valor);
        }
        else{
            inserir(no->direita, valor);
        }
    }
    else if(no->valor> valor){
        if(no->esquerda == NULL){
            no->esquerda = cria_no(valor);
        }
        else{
            inserir(no->esquerda, valor);
        }
    }

}
void arvore_inserir(Arvore* arvore, int valor){
    No* no = arvore->raiz;
    if(no==NULL){
        arvore->raiz = cria_no;
    }
    else{
        inserir(no, valor);
    }

}
int busca_arvore(Arvore arvore, )