#include <stdio.h>

void my_gets(char *str, int size);

int c(void)
{
	char str[7];

	my_gets(str, sizeof(str));
	printf("입력한 문자열 : %s\n", str);

	return 0;
}

void my_gets(char *str, int size)
{
	int ch;
	int i = 0; // 변수 선언과 초기화

	ch = getchar(); // 문자 입력

	while ((ch != '\n') && (i < size - 1)) // 배열의 크기만큼 입력
		// ch 가 개행이 아니고 i 가 size - 1 보다 작을 때
	{
		str[i] = ch; // 배열의 i 번째에 ch 값 대입
		i++; // i 증가
		ch = getchar(); // 새로운 문자 입력
	}

	str[i] = '\0';
}