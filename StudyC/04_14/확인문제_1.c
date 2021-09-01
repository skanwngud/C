#include <stdio.h>

int main_2(void)
{
	int res;
	
	res = sizeof(short) > sizeof(long);
	// short 의 바이트 크기가 long 보다 크면 참이므로 1, 거짓이면 0인 값을 res 에 저장한다.

	res = (res == 1) ? "short" : "long";
	// res 가 1 일 때 short 을, 0 일 때 long 을 출력한다.
	// 위 식에서 short 은 long 보다 크기가 작으므로 res 에 0 이 저장 된다.

	printf("%s\n", res);
	return 0;
}