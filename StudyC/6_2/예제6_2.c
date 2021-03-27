#include <stdio.h>

int main(void)
{
	int a = 1; // a 를 1 로 초기화
	int i; // i 변수 초기화

	for (i = 0; i < 3; i++) // i 가 0, 1, 2 일 때 반복
	{                       // a 값은 2 (1 * 2), 4 (2 * 2), 8 (4 * 2) 이 된다
		a = a * 2;
	}
	printf("a : %d\n", a);

	return 0;
}