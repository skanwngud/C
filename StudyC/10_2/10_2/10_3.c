// �迭�� ���� �Է��ϴ� �Լ�
#include <stdio.h>

void input_arr(double *pa, int size);
double find_max(double *pa, int size);

int c(void)
{
	double arr[5];
	double max;
	int size = sizeof(arr) / sizeof(arr[0]); // �迭�� ����� �����

	input_arr(arr, size);
	max = find_max(arr, size);
	printf("�迭�� �ִ� : %.1lf\n", max);

	return 0;
}

void input_arr(double *pa, int size)
{
	int i;

	printf("%d ���� �Ǽ��� �Է� : ", size);
	for (i = 0; i < size; i++)
	{
		scanf("%lf", pa + 1); // &pa[i] �� ����, �Է��� �迭 ����� �ּ� ����
	}
}

double find_max(double *pa, int size)
{
	double max;
	int i;

	max = pa[0];
	for (i = 1; i < size; i++)
	{
		if (pa[i] > max) max = pa[i]; // �迭�� �뷮�� max ���� ���� �ʰ��ϱ� ����
	}

	return max;
}