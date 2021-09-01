#include <stdio.h>

int main(void)
{
	int a = 10, b = 10;

	++a; // 변수의 값에서 1씩 증가
	--b; // 변수의 값에서 1씩 감소

	printf("%d\n", a);
	printf("%d\n", b);

	return 0;
}