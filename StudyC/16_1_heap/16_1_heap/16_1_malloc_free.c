#include <stdio.h>
#include <stdlib.h> // malloc, free 함수를 위한 include

int a(void)
{
	int *pi;
	double *pd;

	pi = (int *)malloc(sizeof(int));
	if (pi == NULL)
	{
		printf("# 메모리가 부족합니다.\n");
		exit(1); // 프로그램 종료
	}
	
	pd = (double *)malloc(sizeof(double));

	*pi = 10; // 포인터로 동적 할당 영역 사용
	*pd = 3.4; // 포인터로 동적 할당 영역 사용
	
	printf("정수형으로 사용 : %d\n", *pi); // 동적 할당 영역에 저장 된 값 출력
	printf("실수형으로 사용 : %.1f\n", *pd); // 동적 할당 영역에 저장 된 값 출력

	free(pi); // 메모리 반환
	free(pd); // 메모리 반환

	return 0;
}