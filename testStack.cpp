#include "stack.h"

void push(stack **Stack, VERTEX *vert , float w){
    stack * newEntry;
    newEntry = new stack;
    newEntry->weight = w; 
    newEntry->node = vert; 
    newEntry->next = *Stack; 
    *Stack = newEntry;
    
}

void pop(stack **Stack, stack* popped) {
    *popped = **Stack;
    **Stack = *popped->next;
}
