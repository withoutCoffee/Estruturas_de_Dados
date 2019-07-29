#include <stdio.h>
#include <stdlib.h>
#include "myList.h"

/*Copia tudo da lista para uma lista aux com 2x tamanho maior*/
void cloneList(myList *l){
    int i=0;
    int *aux = (int*) malloc(sizeof(int)*l->siz*2);/*Cria espaço na memória heap*/

    /*Copia tudo da lista para uma lista aux com 2x tamanho maior*/
    for(i=0; i<= l->last ;i++){
        aux[i] = l->arr[i];
    }
    free(l->arr);/*Libera espaço que estava alocado*/
    l->arr = aux;/*Recolaca todos os dados, mas com lista de tamanho 2x maior*/
    l->siz = l->siz*2;
}
/*incializa a lista*/
void iniList(myList *l, int sizee){
    l->arr=(int*) malloc(sizeof(int)*sizee);
    l->last=-1;
    l->siz = sizee;
}
/*Função para colocar elemento na final da lista*/
void append(myList *l,int n){
    if(l->last == l->siz-1){
        int i=0;
        cloneList(l);
    }
    l->arr[++l->last] = n;
}
/*Função para adicionar elemento no inicio da lista*/
void prepend(myList *l,int n){
    int i=0;
    /*Desloca os elemento para frente em uma unidade para deixar a posição 0 livre*/
    if(l->last< (l->siz -1)){
        for (i = l->last; i >= 0; i--){
            l->arr[i+1] = l->arr[i];
        }
    }else{
        if(l->siz=-1){
            l->arr[++l->last] = n;
        }else{
            cloneList(l);
        }
    }
    ++l->last;
    l->arr[0] = n;/*coloca no inicio da lista*/
}
/*Adiciona no meio da lista*/
void insertAfterinList(myList *l, int indice, int n){
    if(indice == l->siz-1){
        cloneList(l);
        l->arr[++l->last] = n;

    }else if(l->last+1 == l->siz-1){
        cloneList(l);
        int i=0;

        for(i=l->last; i>indice; i--){

            l->arr[i+1] = l->arr[i];
        }
        l->arr[indice+1] = n;
        ++l->last;
    }else{
        int i=0;
        for(i=l->last; i>indice; i--){
            l->arr[i+1]=l->arr[i];
        }
        l->arr[indice+1] = n;
        ++l->last;
    }

}
/*Deleta item da lista*/
void deleteItem(myList *l, int indice){

    if(indice==l->siz-1){
        l->arr[indice] = NULL;
    }else{
        int i=0;
        for(i=indice; i<l->last;i++){
            l->arr[i]=l->arr[i+1];
        }
    }
}
