#include <stdio.h>

int add_ten(int a);

int a(void)
{
	int a = 10;

	a = add_ten(a); // 함수 호출, a 값을 복사하여 전달
	printf("a : %d\n", a);

	return 0;
}

int add_ten(int a) // main 함수와는 다른 독립적인 저장 공간 할당
{
	a = a + 10; // 매개변수에 10 을 더한다

	return a;
}