#include <stdio.h>

int main(void)
{
	int a = 1; // a 를 1 로 초기화

	do
	{
		a = a * 2; // 실행문을 통해 1 이 2가 됨
	} while (a < 10); // 반복문을 통해 a 가 10 미만이 되기 전까지 계속 반복
	printf("a : %d\n", a);

	return 0;
}

/*
do (실행문) 에서 a 를 먼저 a * 2 를 시키고 10 이 되기 전까지 반복을 한다.
이 때, 2, 4, 8.. 로 증가가 되면서 a < 10 인 마지막 수가 8이 되는데,
8이 된 a 는 마지막 실행문에서 16이 되어버리고 조건문에서 거짓으로 되어 더 이상 수가 늘어나지 않는다.
*/

/*
while 문과 do, ~while 문의 차이는 while 문의 경우 조건에 맞지 않으면 실행이 되지 않지만
do, ~while 문의 경우에는 반드시 한 번은 반복문이 실행 된다는 점이다.
*/