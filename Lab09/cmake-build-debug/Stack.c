//
// Created by Dor Shukrun on 29/06/2022.
//
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

struct Stack {
    Element* array[MAX_STACK_SIZE];
    unsigned int head;
    Element (*cpy)(Element);
    void (*fre)(Element);
};

Stack		StackCraete(Element (*cpy)(Element), void (*fre)(Element)){
    Stack s = (Stack)malloc(sizeof(struct Stack));
    if(s == NULL){
        fprintf(stderr,"malloc failer");
        exit(-1);
    }
    s->cpy = cpy;
    s->fre = fre;
    s->head = -1;
    return s;
}
void		StackDestroy(Stack s){
    while(!StackIsEmpty(s)){
        s->fre(StackPop(s));
    }
    free(s);
}

void		StackPush(Stack, Element){

}

Element   	StackPop(Stack);
Element   	StackTop(Stack);
bool		StackIsEmpty(Stack);