#include <stdio.h>

int e(void)
{
	double arr[5] = { 1.2, 3.5, 7.4, 0.6, 10.0 };
	double *pa = arr;
	double *pb = arr + 2;

	printf("arr �� �� : %.1lf\n", arr); // 1.2 -> 0? �迭�� ù ��° �ּ� 100
	printf("*(arr + 1) �� �� : %.1lf\n", *(arr + 1)); // 3.5
	printf("pa + 2 �� �� : %.1lf\n", pa+2); // 7.4 -> 0? �迭�� �� ��° �ּ� 116
	printf("pa[3] �� �� : %.1lf\n", pa[3]); // 0.6
	printf("*pb �� �� : %.1lf\n", *pb); // 7.4
	printf("pb - pa �� �� : %.1lf\n", pb - pa); // 2

	return 0;
}