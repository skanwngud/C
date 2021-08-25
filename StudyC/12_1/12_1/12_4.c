#include <stdio.h>

int d(void)
{
	char str[80]; // 배열 선언

	printf("공백을 포함한 문자열 입력 : ");
	gets(str); // str 배열에 gets 로 입력 된 문자열 저장
	printf("입력 된 문자열은 %s 입니다.\n", str);

	return 0;
}