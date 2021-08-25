#include <stdio.h>
#include <string.h>

int main(void)
{
	char input;
	int cnt = 0; // 길이 저장
	int max = 0; // 긴 단어 저장

	do
	{
		input = getchar(); // 문자 입력 받음
		if (input == '\n') // 개행을 입력 받았을 때
		{
			if (cnt > max)
			{
				max = cnt;
				cnt = 0;
			}
			else {
				cnt = 0;
			}
		}
		cnt++;
	} while (input != -1);

	printf("길이가 가장 긴 단어 : %d", max-1);

	return 0;
}