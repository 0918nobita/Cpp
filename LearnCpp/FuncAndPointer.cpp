#include <iostream>
using namespace std;

/*
	関数・ポインタ
*/

// void swap(int x, int y);
// void swap(int* pX, int* pY);
void swap(int& x, int& y);
void func1(const int* pX);
void func2(const int& x);

void buy()
{
	cout << "車を買いました。" << endl;
}

void buy(int x)
{
	cout << x << "万円の車を買いました。" << endl;
	// return;
}

void buy(int x, int y)
{
	cout << x << "万円と" << y << "万円の車を買いました。" << endl;
	// return;
}

int buy2(int x, int y)
{
	int z;
	cout << x << "万円と" << y << "万円の車を買いました。" << endl;
	z = x + y;
	return z;
}

int sum2(int x, int y)
{
	return x + y;
}

int max(int x, int y)
{
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}

int main()
{
	buy(); // "車を買いました。"

	buy(50); // "50万円の車を買いました。"

	buy(20, 50); // "20万円と50万円の車を買いました。"

	int sum = buy2(20, 50); // "20万円と50万円の車を買いました。"
	cout << "合計で" << sum << "万円です。" << endl;

	int a = 1;
	cout << "a の値は " << a << " です" << endl; // 1
	int* pa = &a;
	*pa = 2;
	cout << "a の値は " << a << " です" << endl; // 2

	int b = 2, c = 3;
	cout << "b の値は " << b << " です" << endl; // 2
	cout << "c の値は " << c << " です" << endl; // 3
	// swap(&b, &c);
	swap(b, c);
	cout << "b の値は " << b << " です" << endl; // 3
	cout << "c の値は " << c << " です" << endl; // 2

	int d = 4;
	int& rD = d; // 参照rDを変数dで初期化
	cout << "d の値は " << d << " です" << endl; // 4
	rD = 5;
	cout << "d の値は " << d << " です" << endl; // 5

	int e = 6;
	func1(&e); // 6
	func2(e); // 6

	getchar();
	return 0;
}

/*
void swap(int x, int y) // 正常に動作しない
{
	int tmp = x;
	x = y;
	y = tmp;
}
*/

/*
void swap(int* pX, int* pY) // ポインタを使った例
{
	int tmp = *pX;
	*pX = *pY;
	*pY = tmp;
}
*/

void swap(int& x, int& y)
{
	int tmp = x;
	x = y;
	y = tmp;
}

// 仮引数に const を付けると実引数を変更できなくなる
// 値渡しに比べて高速

void func1(const int* pX) // ポインタの場合
{
	cout << "(func1) 値は " << *pX << " です。" << endl;
	// *pX = 10;
}

void func2(const int& x) // 参照の場合
{
	cout << "(func2) 値は " << x << " です" << endl;
	// x = 10;
}
