#include <stdio.h>

void func1(void);

int a = 10;

int f(void)
{
	a = 20;
	func1();
	printf("%d", a);

	return 0;
}

void func1(void)
{
	a = 30; // ���������� ���� �� a �� ��
}

// 30