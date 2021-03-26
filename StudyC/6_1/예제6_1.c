// while 반복문

#include <stdio.h>

int main(void)
{
	int a = 1;

	while(a < 10)
	{
		a = a * 2;
	}

	printf("a: %d\n", a);

	return 0;
}

/*
최초 a 는 1 로 시작하며 while 조건문의 a<10 을 만족하므로 a * 2 가 되어 2로 저장
그 뒤 2 도 a < 10 을 만족하므로 a * 2 가 되어 4 로 저장
그 뒤 4 도 a < 10 을 만족하므로 a * 2가 되어 8 로 저장
8도 a < 10 을 만족하므로 a * 2 가 되어 16으로 저장
16은 a < 10을 만족하지 않으므로 a = 16 이 되어 while 문이 종료가 된다.

즉, while 조건문을 만족시키지 못하면 다음 실행 위치는 반복문 이후의 문장이 된다.
이 경우엔 printf
*/