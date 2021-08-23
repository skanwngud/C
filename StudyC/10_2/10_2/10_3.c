// 배열에 값을 입력하는 함수
#include <stdio.h>

void input_arr(double *pa, int size);
double find_max(double *pa, int size);

int c(void)
{
	double arr[5];
	double max;
	int size = sizeof(arr) / sizeof(arr[0]); // 배열의 사이즈를 계산함

	input_arr(arr, size);
	max = find_max(arr, size);
	printf("배열의 최댓값 : %.1lf\n", max);

	return 0;
}

void input_arr(double *pa, int size)
{
	int i;

	printf("%d 개의 실수값 입력 : ", size);
	for (i = 0; i < size; i++)
	{
		scanf("%lf", pa + 1); // &pa[i] 도 가능, 입력할 배열 요소의 주소 전달
	}
}

double find_max(double *pa, int size)
{
	double max;
	int i;

	max = pa[0];
	for (i = 1; i < size; i++)
	{
		if (pa[i] > max) max = pa[i]; // 배열의 용량이 max 값을 넘지 않게하기 위함
	}

	return max;
}