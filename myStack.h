#ifndef _MYSTACK_
#define _MYSTACK_
/****
 * Implementa��o do m�dulo: [myStack]
 * Autor: [Jonas Pereira de Oliveira]
 * Data de Cria��o: [16/07/19]
 * �ltima altera��o: [99/99/99]
 * Descri��o Geral: [Modulo com objetivo de estudo sobre estrutura de dados]
****/

typedef struct{
    int *arr;
    int top;

}myStack;

void iniStack(myStack *s,int n);/*incializa a pilha*/
void push(myStack *s, int n);/*adiciona elemento*/
int pop(myStack *s);/*retira do topo*/
void clearStack(myStack *s);/*limpa com free e coloca top =-1*/

#endif
