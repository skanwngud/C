// 재귀함수의 정상적 종료

#include <stdio.h>

void fruit(void);

int main(void)
{
	fruit(1); // 처음 호출 횟수를 위해 1을 준다

	return 0;
}

void fruit(int count) // 호출 횟수를 매개변수에 저장
{
	printf("apple\n");
	if (count == 3) return; // 호출 횟수가 3 이 되면 반환하고 끝낸다
	fruit(count + 1); // 호출 횟수를 하나씩 증가시킴
}