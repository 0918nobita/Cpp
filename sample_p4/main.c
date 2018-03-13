#include <stdio.h>
#include "stack.h"
#include "stat_stack.h"

int main() {
	int x = 20;
	
	Stack stack;
	init(&stack);
	push(&stack, x);
	x = pop(&stack);
	cleanup(&stack);
	printf("%d\n", x); // => 20
	
	StatStack stat_stack;
	ss_init(&stat_stack);
	ss_push(&stat_stack, x);
	x = ss_pop(&stat_stack);
	ss_cleanup(&stat_stack);
	printf("%d\n", x); // => 20
}

