#include "stack.h"

void init(Stack *s) {
	s -> top = 0;
}

void push(Stack *s, int i) {
	s -> items[s->top++] = i;
}

int pop(Stack *s) {
	return s -> items[--s->top];
}

void cleanup(Stack *s) {
	/* 静的スタックについては何もしない */
}
