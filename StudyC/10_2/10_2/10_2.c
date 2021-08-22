#include <stdio.h>

void print_arr2(int *pa, int size);

int b(void)
{
	int arr[5] = { 10, 20, 30, 40, 50 };
	int arr2[7] = { 10, 20, 30, 40, 50, 60, 70 };

	print_arr2(arr, 5);
	printf("\n");
	print_arr2(arr2, 7);

	return 0;
}

void print_arr2(int *pa, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d ", pa[i]);
	}
}