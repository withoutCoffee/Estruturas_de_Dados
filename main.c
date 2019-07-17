#include <stdio.h>
#include <stdlib.h>
#include "myStack.h"

/*main utilizada para testes*/
int main(){
    myStack pilha;

    iniStack(&pilha,10);/*pasando endereço da pilha e tamanho da mesma*/
    push(&pilha,50);/*inserindo o número 50*/

    printf("%i",pilha.arr[pilha.top]);
    return 0;
}
