#include "myStack.h"
#include <stdio.h>
#include <stdlib.h>

/*função de inicialização da pilha*/
void iniStack(myStack *s,int n){
    s->top=-1;
    s->arr = (int*) malloc(sizeof(int)*n);
}
/*função para inserir conteúdo na pilha (inteiros)*/
void push(myStack *s, int n){
    s->arr[++s->top] = n;
}
/*Função decrementa do topo da pilha*/
int pop(myStack *s){
    return s->top--;
}
/*função para limpar a pilha*/
void clearStack(myStack *s){
    free(s->arr);
    s->top=-1;
}
