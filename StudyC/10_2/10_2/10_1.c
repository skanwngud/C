#include <stdio.h>

void print_arr(int *pa); // �Լ� ����

int a(void)
{
	int arr[5] = { 10, 20, 30, 40, 50 };

	print_arr(arr); // �Լ� ȣ��

	return 0;
}

void print_arr(int *pa)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%d\n", pa[i]);
	}
}