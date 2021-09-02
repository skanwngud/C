#include <stdio.h>
#include <stdlib.h>

int b(void)
{
	int *pi;
	int i, sum = 0;

	pi = (int *)malloc(5 * sizeof(int)); // 저장 공간 5 * 4 = 20 바이트 할당
	if (pi == NULL)
	{
		printf("# 메모리 공간이 부족합니다.\n");
		exit(1);
	}

	printf("다서 명의 나이를 입력하세요 : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &pi[i]); // 배열 요소에 입력
		sum += pi[i]; // 배열 요소를 더함 (값 누적)
	}

	printf("다섯 명의 평균 나이 : %.1f\n", (sum / 5.0));
	free(pi);

	return 0;
}

// 다서 명의 나이를 입력하세요 : 21 27 24 22 35
// 다섯 명의 평균 나이 : 25.8