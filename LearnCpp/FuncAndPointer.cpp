#include <iostream>
using namespace std;

/*
	�֐��E�|�C���^
*/

// void swap(int x, int y);
// void swap(int* pX, int* pY);
void swap(int& x, int& y);
void func1(const int* pX);
void func2(const int& x);

void buy()
{
	cout << "�Ԃ𔃂��܂����B" << endl;
}

void buy(int x)
{
	cout << x << "���~�̎Ԃ𔃂��܂����B" << endl;
	// return;
}

void buy(int x, int y)
{
	cout << x << "���~��" << y << "���~�̎Ԃ𔃂��܂����B" << endl;
	// return;
}

int buy2(int x, int y)
{
	int z;
	cout << x << "���~��" << y << "���~�̎Ԃ𔃂��܂����B" << endl;
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
	buy(); // "�Ԃ𔃂��܂����B"

	buy(50); // "50���~�̎Ԃ𔃂��܂����B"

	buy(20, 50); // "20���~��50���~�̎Ԃ𔃂��܂����B"

	int sum = buy2(20, 50); // "20���~��50���~�̎Ԃ𔃂��܂����B"
	cout << "���v��" << sum << "���~�ł��B" << endl;

	int a = 1;
	cout << "a �̒l�� " << a << " �ł�" << endl; // 1
	int* pa = &a;
	*pa = 2;
	cout << "a �̒l�� " << a << " �ł�" << endl; // 2

	int b = 2, c = 3;
	cout << "b �̒l�� " << b << " �ł�" << endl; // 2
	cout << "c �̒l�� " << c << " �ł�" << endl; // 3
	// swap(&b, &c);
	swap(b, c);
	cout << "b �̒l�� " << b << " �ł�" << endl; // 3
	cout << "c �̒l�� " << c << " �ł�" << endl; // 2

	int d = 4;
	int& rD = d; // �Q��rD��ϐ�d�ŏ�����
	cout << "d �̒l�� " << d << " �ł�" << endl; // 4
	rD = 5;
	cout << "d �̒l�� " << d << " �ł�" << endl; // 5

	int e = 6;
	func1(&e); // 6
	func2(e); // 6

	getchar();
	return 0;
}

/*
void swap(int x, int y) // ����ɓ��삵�Ȃ�
{
	int tmp = x;
	x = y;
	y = tmp;
}
*/

/*
void swap(int* pX, int* pY) // �|�C���^���g������
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

// �������� const ��t����Ǝ�������ύX�ł��Ȃ��Ȃ�
// �l�n���ɔ�ׂč���

void func1(const int* pX) // �|�C���^�̏ꍇ
{
	cout << "(func1) �l�� " << *pX << " �ł��B" << endl;
	// *pX = 10;
}

void func2(const int& x) // �Q�Ƃ̏ꍇ
{
	cout << "(func2) �l�� " << x << " �ł�" << endl;
	// x = 10;
}
