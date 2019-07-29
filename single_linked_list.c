#include "single_linked_list.h"
/*função para inserr na lista simplesmente encadeada*/
void append_SLList(struct Node** n, int value){
    if(!*n){
        *n = (struct Node*) malloc(sizeof(struct Node));
        *n->value = value;
        *n->next = NULL;
    }else{
        struct None* aux = *n;
        while(aux->next){
            aux = aux->next;
        }
        aux->next = (struct Node*) malloc(sizeof(struct Node));
        aux->next->value = value;
        aux->next->next = NULL;
    }

}
void print_list(struct **node){
    struct None *aux = *n;
    while(aux->next){
        pritnf("%i\n",aux->value);
        aux = aux->next;
    }
}
/*função para inserir no inicio da lista simplesmente encadeada*/

/*função para remover da lista simplesmente encadeada*/
