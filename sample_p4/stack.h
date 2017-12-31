#ifndef STACK_H
#define STACK_H

typedef struct {
	int items[20];
	int top;
} Stack;

void init(Stack *s);
void push(Stack *s, int i);
int pop(Stack *s);
void cleanup(Stack *s);

#endif
