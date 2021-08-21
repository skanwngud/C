#include <stdio.h>

int main(void)
{
	double arr[3] = { 1.2, 3.4, 5.6 };
	double *pb = arr;
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("%.1lf ", *pb);
		// pb = &arr -> arr 의 주소값
		pb++;
	}

	return 0;
}