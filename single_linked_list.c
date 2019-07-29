#include "single_linked_list.h"
#define NULL 0
/*Função para inserir na lista simplesmente encadeada*/
void append_SLList(struct Node** n, int value){
    if(!*n){
        *n = (struct Node*) malloc(sizeof(struct Node));

        (*n)->value = value;
        (*n)->next = NULL;
    }else{
        struct Node* aux = *n;
        while(aux->next){
            aux = aux->next;
        }
        aux->next = (struct Node*) malloc(sizeof(struct Node));
        aux->next->value = value;
        aux->next->next = NULL;
    }

}
void print_list(struct Node** n){
    struct Node *aux = *n;
    while(aux->next){
        printf("Value:%i\n",aux->value);
        aux = aux->next;
    }
    printf("Value:%i\n",aux->value);
}
/*função para inserir no inicio da lista simplesmente encadeada*/

/*função para remover da lista simplesmente encadeada*/
