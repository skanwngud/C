#include <stdio.h>

int main(void)
{
	int a = 10; // a 라는 변수를 초기화
	
	if (a >= 0) {
		a = 1; // 0 이상일 경우 1
	}
	else {
		a = -1; // 0 이상이 아닌 경우에 -1
	}

	printf("a : %d\n", a);

	return 0;
}

/* if else 는 중괄호를 따로 쓴다. 
   else 에는 따로 조건식을 붙이지 않는다. */