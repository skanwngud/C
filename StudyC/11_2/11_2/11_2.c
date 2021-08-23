#include <stdio.h>

int b(void)
{
	int res;
	char ch;

	while (1) // 무한 반복문
	{
		res = scanf("%c", &ch); // 문장 입력, ctrl + z 누르면 -1 반환
		if (res == -1) break; // scanf 에서 -1 반환 되면 종료
		printf("%d", ch); // ch 의 아스키코드를 반환
	}

	return 0;
}