#include <stdio.h>

int d(void)
{
	int arr[5] = { 10, 20, 30, 40, 50 };
	int *pa = arr;
	int *pb = pa + 3; // 배열의 네 번째 요소 주소

	printf("pa : %u\n", pa); // 배열의 첫 번째 요소
	printf("pb : %u\n", pb); // 배열의 네 번째 요소

	pa++; // pa 들을 다음 요소들로 이동시킴

	printf("pb - pa : %u\n", pb - pa); // 두 포인터의 뺄셈
	
	printf("앞에 있는 배열의 요소의 값 출력 : ");
	if (pa > pb) printf("%d\n", *pa);
	else printf("%d", *pb);

	return 0;
}

/*
pa : 17823796
pb : 17823808
pb - pa : 2
앞에 있는 배열의 요소의 값 출력 : 40
*/