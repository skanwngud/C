#include <stdio.h>

int main(void)
{
	int a = 10, b = 15, total; // int �� ���� ����� �ʱ�ȭ
	double avg;				   // double �� ���� ����
	int* pa, * pb;			   // ������ ���� ����
	int* pt = &total;		   // ������ ���� �ʱ�ȭ
	double* pg = &avg;         // double �� ������ ���� �� �ʱ�ȭ

	pa = &a;					// ������ pa �� a �� �ּ� ����
	pb = &b;					// ������ pb �� b �� �ּ� ����

	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("�� ������ �� :%d, %d\n", *pa, *pb);
	printf("�� ������ �� : %d\n", *pt);
	printf("�� ������ ��� : %.1f\n", *pg);

	return 0;
}