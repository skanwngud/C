#include <stdio.h>

void sum(int a); // �Լ� ���� (return ���� �����Ƿ� void �� ����)

int main_a(void)
{
	sum(10);
	sum(100);
	
	return 0;
}

void sum(int a)
{
	int i; // for ���� ���� ���� i ����
	int result = 0; // ���� ��� �� �� �� ���� (���� ����̹Ƿ� 0 ���� ���� �����Ѵ�)

	for (i = 1; i <= a; i++)
	{
		result += i;
	}

	printf("1���� %d ������ ���� %d �Դϴ�\n", a, result);
}