#include <stdio.h>

void print_arr(int *pa); // 함수 선언

int a(void)
{
	int arr[5] = { 10, 20, 30, 40, 50 };

	print_arr(arr); // 함수 호출

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