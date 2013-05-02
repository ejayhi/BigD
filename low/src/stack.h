/*
 * stack.h
 *
 *  Created on: Mar 28, 2013
 *      Author: ejay
 */

#ifndef STACK_
#define STACK_

#include"../../util.h"

typedef struct Coordinates {
	int row;
	int col;
} Coordinates;

typedef struct Node {
	void *content;
	struct Node *next;
} Node;

typedef struct Stack {
	Node *head;
	int count;
} Stack;

Stack* initializeStack();
void append(Stack* result, Stack* appendee);
void push(Stack *stack, void *newElem);
void *pop(Stack *stack);
int push_unique(Stack *stack, void *newElem);
Stack* add(Stack* one, Stack* two);

#endif /* STACK_ */