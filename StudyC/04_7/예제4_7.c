#include <stdio.h>

int main_a(void)
{
	int a = 10, b = 20, res;

	a + b; // �������� ������
	printf("%d + %d = %d\n", a, b, a+b); // �������� �ٷ� ��¿� ���

	res = a + b; // �������� ������ ����
	printf("%d + %d = %d\n", a, b, res); // ���� �� ���� ���
	
	return 0;
}