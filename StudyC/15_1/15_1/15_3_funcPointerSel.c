#include <stdio.h>

void func(int(*fp)(int, int)); // 함수 포인터를 매개로 갖는 함수
int sum2(int a, int b);
int mul(int a, int b);
int max(int a, int b);

int c(void)
{
	int sel; // 선택 된 메뉴 번호를 저장 할 변수

	printf("01 두 정수의 합\n");
	printf("02 두 정수의 곱\n");
	printf("03 두 정수 중에서 큰 값 계산\n");
	printf("원하는 연산을 선택하세요 : \n");
	scanf("%d", &sel);

	switch (sel)
	{
	case 1: func(sum2); break; // 1 번일 때 sum 을 실행하고 종료
	case 2: func(mul); break; // 2 번 일 때 mul 을 실행하고 종료
	case 3: func(max); break; // 3 번 일 때 max 를 실행하고 종료
	}

	return 0;
}

void func(int(*fp)(int, int))
{
	int a, b;
	int res;

	printf("두 정수의 값을 입력하세요 : ");
	scanf("%d%d", &a, &b);
	res = fp(a, b); // 함수 포인터로 가리키는 함수 호출
	printf("결괏값은 : %d\n", res);
}

int sum2(int a, int b)
{
	return (a + b);
}

int mul(int a, int b)
{
	return (a * b);
}

int max(int a, int b)
{
	if (a > b) return a;
	else return b;
}