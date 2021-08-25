#include <stdio.h>


int e(void)
{
	char str[80];

	printf("공백이 포함 된 문자열 입력 : ");
	fgets(str, sizeof(str), stdin); // 문자열 입력

	printf("입력 된 문자열은 %s 입니다.\n", str);

	return 0;
}