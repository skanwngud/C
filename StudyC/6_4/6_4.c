#include <stdio.h>

int main_a(void)
{
	int i, j; // ���� ����

	for (i = 0; i < 3; i++) // 3�� �ݺ�
	{
		for (j = 0; j < 5; j++) // 5�� �ݺ�
		{
			printf("*"); // * �ۼ�
		}
		printf("\n"); // �ٹٲ�
	}

	return 0;
}