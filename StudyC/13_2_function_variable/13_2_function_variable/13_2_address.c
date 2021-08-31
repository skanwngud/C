#include <stdio.h>

void add_ten2(int *pa);

int b(void)
{
	int a = 10;

	add_ten2(&a);
	printf("a : %d\n", a);

	return 0;
}

void add_ten2(int *pa)
{
	*pa = *pa + 10; // 포인터 pa 가 가리키는 변수값 10 증가
}