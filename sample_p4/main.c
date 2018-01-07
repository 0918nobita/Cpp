#include <stdio.h>
#include "stack.h"

int main() {
	int x = 20;
	Stack stack1;
	init(&stack1);
	push(&stack1, x);
	x = pop(&stack1);
	cleanup(&stack1);
	printf("%d\n", x); // => 20
}

