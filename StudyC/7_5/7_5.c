// 재귀함수 (자신 스스로를 부르는 함수)

#include <stdio.h>

void fruit(void);

int main(void)
{
	fruit();

	return 0;
}

void fruit(void)
{
	printf("apple\n");
	fruit();
}