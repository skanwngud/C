#include <stdio.h>

void input_nums(int *lotto_nums); // �迭�� �ζ� ��ȣ �Է��ϴ� �Լ�
void print_nums(int *lotto_nums); // �迭�� ���� �� ��ȣ�� ����ϴ� �Լ�

int main(void)
{
	int lotto_nums[6]; // �迭 ����

	input_nums(lotto_nums); // �ζ� �Է��Լ� ȣ��
	print_nums(lotto_nums); // ���� �� ����Լ� ȣ��

	return 0;
}

void input_nums(int *lotto_nums)
{
	int i;
	int j;
	
	for (i = 0; i < 6; i++)
	{
		printf("��ȣ �Է� : ");
		scanf("%d", &lotto_nums[i]);

		for (j = 0; j < i; j++)
		{
			if (*(lotto_nums + j) == *(lotto_nums + i))
			{
				printf("���� ��ȣ�� �ֽ��ϴ�.\n");
				printf("��ȣ �Է� : ");
				scanf("%d", &lotto_nums[i]);
			}
		}
	}
}

void print_nums(int *lotto_nums)
{
	int i;

	printf("�ζ� ��ȣ :");
	for (i = 0; i < 6; i++)
	{
		printf("%5d", lotto_nums[i]);
	}
}