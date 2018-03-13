#include <stdio.h>

/*
 * sample_p2.c を抽象化したもの
 * 
 * 抽象化すると、データを操作するコードを局所化できる。
 *
 * 構造体 Stack のインスタンスがスタックのデータを保持する。
 */

typedef struct {
	int items[20];
	int top;
} Stack;

void init(Stack *s);
void push(Stack *s, int i);
int pop(Stack *s);
void cleanup(Stack *s);

int main() {
	int x = 20;
	Stack stack1;
	init(&stack1);
	push(&stack1, x);
	x = pop(&stack1);
	cleanup(&stack1);
	printf("%d\n", x); // => 20
}

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

