#ifndef _SINGLE_LINKED_LIST_
#define _SINGLE_LINKED_LIST_

struct Node{
    int value;
    struct Node *next;
};
struct SLList{
    struct Node *head;
    int sizee;
};

void append_SLList(struct Node** n, int value);/*fun��o para inserr na lista simplesmente encadeada*/
void prepend_SSList(struct Node** n, int value);/*fun��o para inserir no inicio da lista simplesmente encadeada*/
void remove_SSList(struct Node** n, int index);/*fun��o para remover da lista simplesmente encadeada*/
#endif
