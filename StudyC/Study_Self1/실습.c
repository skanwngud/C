#include <stdio.h>
#include <math.h>

int main_1(void)
{
	int P, D;
	double S, C, pi = 3.141592;

	scanf("%d", &D);
	scanf("%d", &P);

	S = pi * pow(D, 2) / 4;
	printf("������ ũ�� : %.1f\n", S);

	C = P / S * 10;
	printf("10cm �� ���� : %.1f\n", C);

	return 0;
}