#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i <= 10; i++) // i 가 1 이고 10일때까지 반복
	{
		sum += i; // 반복할 때마다 1씩 증가하는 i 를 계속 더해줌
		if (sum > 30) break; // sum 이 30을 넘길 때 break
	}

	printf("누적한 값 %d\n", sum); // sum 의 값이 36 이 되었으므로 정지
	printf("마지막으로 더한 값 : %d\n", i); // sum 이 36 이 될 때 i 의 값은 8

	return 0;
}

/*
break 를 쓸 때 반복문 하나만을 정지시키기 위해서는 조건식 바로 옆에 붙여써야한다.
그렇지않고 break 를 조건문 중괄호 안에 넣게 되면 전체 반복문이 종료된다.
if 문과 달리 swith ~ case 블록 안에서 break 를 사용하면 switch ~ case 블록만 벗어난다.
*/