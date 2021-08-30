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
	a = 30; // 전역변수로 선언 된 a 의 값
}

// 30