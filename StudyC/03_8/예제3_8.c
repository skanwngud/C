#include <stdio.h>

int main_a(void)
{
	int income = 0; // income ���� �ʱ�ȭ
	double tax; // tax ���� ����
	const double tax_rate = 0.12; // tat_rate ���� �ʱ�ȭ

	income = 456; // incom ���� ����
	tax = income * tax_rate; // tax ���� ����
	printf("������ %.1lf �Դϴ�.\n", tax); // ����� ���

	return 0;
}

/*
�����ڿ� �ĺ���
int abc; �� �� int �� �����Ϸ��� ����� �� �̸��̸�
abc �� ���Ƿ� �ۼ� ������ �����̸��̴�
*/