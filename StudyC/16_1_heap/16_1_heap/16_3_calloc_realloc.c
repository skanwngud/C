#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *pi;
	int size = 5;
	int count = 0;
	int num;
	int i;

	pi = (int *)calloc(size, sizeof(int));
	while (1)
	{
		printf("양수만 입력하세요 : ");
		scanf("%d", &num); // 데이터 입력
		if (num <= 0) break; // num 이 양수가 아닐시에 종료
		if (count == size)
		{
			size += 5; // 크기를 늘려서 재할당
			pi = (int *)realloc(pi, size * sizeof(int));
		}
		
		pi[count++] = num;
	}
	for (i = 0; i < count; i++)
	{
		printf("5%d", pi[i]);
	}

	free(pi);

	return 0;
}