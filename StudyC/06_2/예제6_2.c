#include <stdio.h>

int main(void)
{
	int a = 1; // a �� 1 �� �ʱ�ȭ
	int i; // i ���� �ʱ�ȭ

	for (i = 0; i < 3; i++) // i �� 0, 1, 2 �� �� �ݺ�
	{                       // a ���� 2 (1 * 2), 4 (2 * 2), 8 (4 * 2) �� �ȴ�
		a = a * 2;
	}
	printf("a : %d\n", a);

	return 0;
}