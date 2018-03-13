#include "stack.h"
#include "stat_stack.h"

int mean(StatStack *s) {
	int sum = 0;
	printf("%d\n", s->basic_stack->items[i]);
	//for (int i = 0; i < 20; i++) sum += s->basic_stack->items[i];
	return sum / 20;
}

int median(StatStack *s) {
	return 0;
}

int mode(StatStack *s) {
	return 0;
}

void ss_init(StatStack *s) {
	init(&s->basic_stack);
}

void ss_push(StatStack *s, int i) {
	push(&s->basic_stack, i);
}

int ss_pop(StatStack *s) {
	return pop(&s->basic_stack);
}

void ss_cleanup(StatStack *s) {
	cleanup(&s->basic_stack);
}
