#include <stdio.h>

int get_num(void);

int main(void)
{
	int res;

	res = get_num();

	printf("��ȯ�� : %d\n", res);

	return 0;
}

int get_num(void)
{
	int num;

	printf("��� �Է� : ");
	scanf_s("%d", &num);

	while (num < 0) // ������ �Է� �Ǹ� �ش� ������ ���, ����ó��
	{
		printf("����� �Է��ϼ���.\n");
		printf("��� �Է� : ");
		scanf_s("%d", &num);
	}

	return num;
}