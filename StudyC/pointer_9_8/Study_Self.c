// 포인터 없이 직접 변수의 값 바꾸기
#include <stdio.h>

void swap(void); // 함수 선언

int main(void)
{
	int a = 10, b = 20;

	swap();
	printf("a : %d, b : %d", a, b);

	return 0;
}

void swap(void)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}