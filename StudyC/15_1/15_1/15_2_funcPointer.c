#include <stdio.h>

int sum(int, int); // �Լ� ����

int b(void)
{
	int(*fp)(int, int); // �Լ� ������ ����
	int res; // ��ȯ���� ������ ����

	fp = sum; // �Լ����� �Լ� �����Ϳ� ����
	res = (*sum)(10, 20); // �Լ� �����ͷ� �Լ� ȣ��
	printf("result : %d", res);

	return 0;
}

int sum(int a, int b)
{
	return (a + b);
}