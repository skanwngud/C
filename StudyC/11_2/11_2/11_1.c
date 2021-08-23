#include <stdio.h>

int a(void)
{
	char ch;
	int i;

	for (i = 0; i < 3; i++)
	{
		scanf("%c", &ch);
		printf("%c", ch);
	}

	return 0;
}

// tiger
// tig <- tiger 를 입력했으나 scanf 가 3번만 반복함
// 3번 반복하는 동안 버퍼에 문자가 쌓임