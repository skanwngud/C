#include <stdio.h>

int main_a(void)
{
	int a;

	do
	{
		scanf("%d", &a);
	} while (a < 0);
	 // 단순 참과 거짓을 밝히고 싶으면 중괄호 생략 가능
	return 0;
}