#include <stdio.h>

int main_a(void)
{
	int i, j; // 변수 설정

	for (i = 0; i < 3; i++) // 3번 반복
	{
		for (j = 0; j < 5; j++) // 5번 반복
		{
			printf("*"); // * 작성
		}
		printf("\n"); // 줄바꿈
	}

	return 0;
}