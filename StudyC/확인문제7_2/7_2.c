#include <stdio.h>

void sum(int a); // 함수 정의 (return 값이 없으므로 void 로 시작)

int main_a(void)
{
	sum(10);
	sum(100);
	
	return 0;
}

void sum(int a)
{
	int i; // for 문을 위한 변수 i 정의
	int result = 0; // 수식 계산 후 들어갈 값 정의 (합의 계산이므로 0 으로 먼저 정의한다)

	for (i = 1; i <= a; i++)
	{
		result += i;
	}

	printf("1부터 %d 까지의 합은 %d 입니다\n", a, result);
}