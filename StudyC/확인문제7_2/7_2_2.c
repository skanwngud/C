#include <stdio.h>

int func(int n); // input �� return �� �� �� ����
int ploy(int n); // input �� return �� �� �� ����

int main_b(void)
{
	printf("%d\n", func(-3)); // func �Լ��� input �� -3 �� ���� ���

	return 0;
}

int func(int n) // func �Լ� ����
{
	int res; // ���� ������ ���� ����

	res = poly(n); // poly �Լ��� ���� ����
	
	if (res >= 0) return res; // �� �����ڸ� ���� res �� ����
	
	else return -res;
}

int poly(int n) // poly �Լ� ����
{
	return((2 * n * n) + (3 * n)); // poly �Լ� ���� ����
}

// retrun �� = 9