#include <stdio.h>

/*
 * ある固定サイズの整数型のスタックが必要である場合、
 * 抽象化を考えない場合は配列を使用して直接アクセスすればいい。
 */

int main() {
	int stack_items[20], stack_top = 0, x;
	x = 20;
	stack_items[stack_top++] = x;
	x = stack_items[--stack_top];
	printf("%d\n", x); // => 20
}
