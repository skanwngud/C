// 12_5.c 개행문자 제거
#include <stdio.h>
#include <string.h> // 문자 관련 함수

int e2(void)
{
	char str[80];

	printf("배열을 포함한 문자열 입력 : ");
	fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = '\0';
	// str 배열의 길이의 뒤에서 두 번째자리를 널문자로 바꿔 바로 끝나게 함
	printf("입력 된 문자열은 %s 입니다.", str);

	return 0;
}