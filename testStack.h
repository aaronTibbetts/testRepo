#ifndef STACK_H
#define STACK_H
#include "graph.h"

//stack is basically a linked list
//need to ppush to add data
//need to pop to remove data 

struct stack{
    float weight;
    VERTEX *node;
    stack *next; 
};



void pop(stack **theStack, stack *popped);

void push(stack **Stack, VERTEX *vert,  float w);

#endif
