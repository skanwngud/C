#include <stdio.h>

int e(void)
{
	int ch;
	int cnt = 0;
	ch = getchar();

	while (ch != '\n')
	{
		if (ch >= 97 && ch <= 122) cnt++;

		ch = getchar();
	}

	printf("소문자의 갯수 : %d\n", cnt);
}