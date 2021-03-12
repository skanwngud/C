#include <stdio.h>

int main(void)
{
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3; // 5 에서 1 을 추가 시킨 뒤 3을 곱함
	post = (b++) * 3; // 5 에서 3을 곱한 뒤 1을 추가시킴 (이 경우엔 3에서 곱하고 1을 증가 시킨 뒤 연산이 되질 않음)

	printf("초깃값 a = %d, b = %d\n", a, b);
	printf("전위형 : (++a) = %d, 후위형 : (b++) = %d\n", pre, post);

	return 0;
}

/* (++a) + a + (++a) 처럼 같은 변수를 2개 이상 사용할 때에는 증감연산자를 사용 할 수 없다.*/