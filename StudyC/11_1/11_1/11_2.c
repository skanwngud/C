#include <stdio.h>

int a(void)
{
	char ch1, ch2; // char 형 변수 선언

	scanf("%c%c", &ch1, &ch2); // 2개의 문자 연속 입력
	printf("%c%c", ch1, ch2);

	return 0;
}