#include <stdio.h>

int b(void)
{
	int arr[3];
	int *pa = arr; // 포인터가 arr 를 가르킴
	int i;

	*pa = 10; // 첫 번째 배열 요소에 10 대입
	*(pa + 1) = 20; // 두 번째 배열 요소에 20 대입
	pa[2] = pa[0] + pa[1]; // 세 번째 배열 요소에 해당 수식 대입

	for (i = 0; i < 3; i++)
	{
		printf("%d", arr[i]);
		printf("\n");
	}

	return 0;
}

// 10
// 20
// 30