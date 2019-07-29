#ifndef _MYLIST_
#define _MYLIST_
/****
 * Implementa��o do m�dulo: [myList]
 * Autor: [Jonas Pereira de Oliveira]
 * Data de Cria��o: [16/07/19]
 * �ltima altera��o: [99/99/99]
 * Descri��o Geral: [Modulo com objetivo de estudo sobre estrutura de dados]
****/
/*Lista implementada com array*/
typedef struct{
    int *arr;
    int siz;
    int last;

}myList;

void iniList(myList *l,int sizee);/*incializa a lista*/

void append(myList *l,int n);/*Adiciona item ao final da lista*/
void prepend(myList *l,int n);/*Adiciona item ao inicio da lista*/
void insertAfterinList(myList *l, int indice, int n);/*Adiciona n meio da lista*/
void deleteItem(myList *l, int indice);/*Deleta item da lista*/


#endif
