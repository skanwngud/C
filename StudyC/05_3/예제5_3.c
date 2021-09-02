#include <stdio.h>

int main(void)
{
	int a = 0, b = 0; // 변수 초기화

	if (a > 0) { // 첫 번째 조건
		b = 1;
	}

	else if (a == 0) { // 두 번째 조건
		b = 2;
	}

	else { // 세 번째 조건
		b = 3; // 세 번째 조건의 경우 두 번째 조건에서 이미 참이므로 연산하지 않고 내려간다
	}

	printf("b : %d\n", b);

	return 0;
}