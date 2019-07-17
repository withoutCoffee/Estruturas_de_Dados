#include "myStack.h"
#include <stdio.h>
#include <stdlib.h>

/*fun��o de inicializa��o da pilha*/
void iniStack(myStack *s,int s){
    s->top=-1;
    s->arr = (int*) malloc(sizeof(int)*s);
}
/*fun��o para inserir conte�do na pilha (inteiros)*/
void push(myStack *s, int n){
    s->arr[++s->top] = n;
}
/*Fun��o decrementa do topo da pilha*/
int pop(myStack *s){
    return s->top--;
}
/*fun��o para limpar a pilha*/
void clearStack(myStack *s){
    free(s->arr);
    s->top=-1;
}
