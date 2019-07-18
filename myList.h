#ifndef _MYLIST_
#define _MYLIST_
/****
 * Implementação do módulo: [myList]
 * Autor: [Jonas Pereira de Oliveira]
 * Data de Criação: [16/07/19]
 * Última alteração: [99/99/99]
 * Descrição Geral: [Modulo com objetivo de estudo sobre estrutura de dados]
****/
/*Lista implementada com array*/
typedef struct{
    int *arr;
    int siz;
    int last;

}myList;

void iniList(myList *l,int sizee);/*incializa a lista*/
void append(myList *l,int n);
void prepend(myList *l,int n);

#endif
