#include <stdio.h>

int main(void)
{
	int a = 20;
	int b = 0;

	if (a > 10) // a 가 10보다 크면, 이라는 조건식을 주었으며 결과는 참
	{
		b = a; // 결과가 참일 때 a 를 b 에 대입하므로 b 는 20 이 된다.
		printf("a 와 b 는 같습니다.\n");
	}

	printf("a : %d, b : %d\n", a, b);

	return 0;
}