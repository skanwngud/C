#include <stdio.h>

void print_char(char ch, int count); // 함수 선언 (반환값을 void 로 처리)

int main(void)
{
	print_char('@', 5);

	return 0;
}

void print_char(char ch, int count)
{
	int i;

	for (i = 0; i < count; i++) // 반복, 조건, 제어문 쓸 땐 세미콜론(;) 사용 금지
	{
		printf("%c", ch);
	}

	return; // 반환값 없으므로 단독으로 사용
}