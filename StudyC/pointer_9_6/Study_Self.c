// ��� ���� ���� �������� ����
#include <stdio.h>

int main(void)
{
	int a = 10;
	int* p = &a;
	double* pd;

	pd = p;
	printf("%lf\n", *pd); // �����Ⱚ ���

	/*
	�����Ⱚ�� ��� ���� �ʱ� ���ؼ� ����ȯ�� �����ָ� �ȴ�
	
	double a = 3.4;
	double *pd = &a;
	int *pi;
	pi = (int *)pd;
	*/

	return 0;
}