#include <stdio.h>

int *sum(int a, int b); // int �� ������ �ּҸ� ��ȯ�ϴ� �Լ� ����

int main(void)
{
	int *resp; // ��ȯ���� ������ ������

	resp = sum(10, 20); // resp �� sum �Լ��� ������� �ּҸ� ����
	printf("�� ������ �� : %d\n", *resp);

	return 0;
}

int *sum(int a, int b)
{
	static int res; // ���� ���� ���� ����

	res = a + b;

	return &res; // res ���� ��ȯ
}