#include <stdio.h>

void assign(void); // �Լ� ����

int ab(void)
{
	auto int a = 0;

	assign();
	printf("main �Լ� a : %d\n", a);

	return 0;
}

void assign(void)
{
	int a; // main �Լ��� �ִ� ������ ���� �̸��� ���� ����, auto ����

	a = 10;
	printf("assign �Լ� a : %d\n", a);
}