// const ���
#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	const int* pa = &a;

	printf("���� a �� �� : %d\n", *pa); // pa �� ���󰡸� &a �� ������ &a �� a�� �ּҰ��̴� 10
	
	pa = &b;							// pa �� b�� �ּҰ��� ����

	printf("���� b �� �� : %d\n", *pa); // pa �� ���󰡸� &b �� ������.. 20

	pa = &a;							// pa �� a �� �ּҰ��� ����
	a = 20;								// a �� 20���� �ʱ�ȭ
	printf("���� a �� �� : %d\n", *pa); // pa �� a �� ��Ÿ���Ƿ� 20

	return 0;
}