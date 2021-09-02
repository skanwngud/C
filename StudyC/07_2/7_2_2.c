#include <stdio.h>

int get_num(void);

int main(void)
{
	int res;

	res = get_num();

	printf("반환값 : %d\n", res);

	return 0;
}

int get_num(void)
{
	int num;

	printf("양수 입력 : ");
	scanf_s("%d", &num);

	while (num < 0) // 음수가 입력 되면 해당 문구를 출력, 예외처리
	{
		printf("양수를 입력하세요.\n");
		printf("양수 입력 : ");
		scanf_s("%d", &num);
	}

	return num;
}