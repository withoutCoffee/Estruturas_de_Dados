#ifndef _MYSTACK_
#define _MYSTACK_

typedef struct{
    int *arr;
    int top;

}myStack;

void push(myStack *s);
int pop(myStack *s);
#endif
