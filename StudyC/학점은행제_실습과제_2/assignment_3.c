#include <stdio.h>

int main_b(void)
{
	int arr[5] = { 10, 20, 30, 40, 50 };
	int *pa = arr;
	int* pb = pa + 3;

	printf("pa : %u\n", pa);
	printf("pb : %u\n", pb);
	printf("%u", &pa);

	return 0;
}