#include <stdio.h>

int c(void)
{
	char str[80]; // 배열선언
	printf("문자열 입력 : ");
	scanf("%s", str); // scanf 로 문자 입력 (apple jam)
	printf("첫 번째 단어 : %s\n", str); // apple
	scanf("%s", str); // 버퍼에 남은 jam 이란 단어가 str 배열에 입력 됨
	printf("버퍼에 남아있는 두 번째 단어 : %s\n", str); // jam

	return 0;
}