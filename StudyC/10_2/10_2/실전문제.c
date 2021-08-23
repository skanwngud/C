#include <stdio.h>

void input_nums(int *lotto_nums); // 배열에 로또 번호 입력하는 함수
void print_nums(int *lotto_nums); // 배열에 저장 된 번호를 출력하는 함수

int main(void)
{
	int lotto_nums[6]; // 배열 선언

	input_nums(lotto_nums); // 로또 입력함수 호출
	print_nums(lotto_nums); // 저장 값 출력함수 호출

	return 0;
}

void input_nums(int *lotto_nums)
{
	int i;
	int j;
	
	for (i = 0; i < 6; i++)
	{
		printf("번호 입력 : ");
		scanf("%d", &lotto_nums[i]);

		for (j = 0; j < i; j++)
		{
			if (*(lotto_nums + j) == *(lotto_nums + i))
			{
				printf("같은 번호가 있습니다.\n");
				printf("번호 입력 : ");
				scanf("%d", &lotto_nums[i]);
			}
		}
	}
}

void print_nums(int *lotto_nums)
{
	int i;

	printf("로또 번호 :");
	for (i = 0; i < 6; i++)
	{
		printf("%5d", lotto_nums[i]);
	}
}