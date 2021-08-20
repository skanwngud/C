#include <stdio.h>

int a(void)
{
	int arr[3];
	int i;

	*(arr + 0) = 10; // arr 첫 번째 요소의 주소값에 0 을 더한 위치에 10 을 넣음 (arr[0] = 10)
	*(arr + 1) = *(arr + 0) + 10; // arr 두 번째 요소의 주소값에 1 을 더한 위치에 해당 요소를 넣음 (arr[1] = arr[0] + 10)

	printf("세 번째 배열 요소에 키보드 입력 : ");
	scanf("%d", arr + 2); // 키보드 입력값으로 배열의 3번째 값을 받음

	for (i = 0; i < 3; i++)
	{
		printf("%d", *(arr + i));
		printf("\n");
	}

	return 0;
}

// 10
// 20
// 키보드 입력값