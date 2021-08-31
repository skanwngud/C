#include <stdio.h>

int b(void)
{
	char animal[5][20]; // 2차원 char 배열 선언
	int i; // 반복제어 변수
	int count; // 행의 수를 저장할 변수

	count = sizeof(animal) / sizeof(animal[0]); // 행의 수 계산

	for (i = 0; i < count; i++)
	{
		scanf("%s", &animal[i]); // 문자열 입력
	}

	for (i = 0; i < count ; i++)
	{
		printf("%s ", animal[i]); // 문자열 출력
	}

	return 0;
}