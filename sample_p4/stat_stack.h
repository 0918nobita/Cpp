#ifndef STAT_STACK_H
#define STAT_STACK_H

#include "stack.h"

typedef struct {
	Stack basic_stack;
} StatStack;

int mean(StatStack *s);
int median(StatStack *s);
int mode(StatStack *s);

void ss_init(StatStack *s);
void ss_push(StatStack *s, int i);
int ss_pop(StatStack *s);
void ss_cleanup(StatStack *s);

#endif
