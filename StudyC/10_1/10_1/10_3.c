#include <stdio.h>

int c(void)
{
	int arr[3] = { 10, 20, 30 };
	int *pa = arr;
	int i;

	printf("배열의 값 : ");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *pa); // pa 가 가리키는 배열의 요소 출력 (최초는 첫 번째 요소를 가리킴)
		pa++; // 다음 배열 요소를 가리키도록 pa 값 증가시키기
	}

	return 0;
}

// 10 20 30