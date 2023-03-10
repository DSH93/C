#ifndef STACK_H
#define STACK_H

#define MAX_STACK_SIZE 1024
#include <stdbool.h>

typedef void* Element;
typedef struct Stack* Stack;

Stack		StackCraete(Element (*cpy)(Element), void (*fre)(Element));
void		StackDestroy(Stack);
void		StackPush(Stack, Element);
Element   	StackPop(Stack);
Element   	StackTop(Stack);
bool		StackIsEmpty(Stack);
#endif
