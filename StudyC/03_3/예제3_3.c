#include <stdio.h>

int main(void)
{
	short sh = 32767; // short 형의 최대값
	int in = 2147483647; // int 형의 최대값
	long ln = 2147483647; // long 형의 최대값 
	long long lln = 123451234512345; // 아주 큰 값 (long long 형의 최대값은 아님)

	printf("short형 변수 출력 : %d\n", sh);
	printf("int형 변수 출력 : %d\n", in);
	printf("long 형 변수 출력 : %ld\n", ln);
	printf("long long 형 변수 출력 : %lld\n", lln);
	printf("long long 형의 크기 : %d 바이트\n", sizeof(long long)); // 8 바이트로 출력 됨

	return 0;
}

/* int 형이 연산의 기본값이므로 연산속도가 가장 빠르다.
short 형은 메모리를 적게 먹지만 연산할 때 int 형으로 변환이 되므로 속도가 느릴 수 있다.
long 과 long long 형태는 int 보다 많은 수를 표현할 수 있지만 그만큼 메모리를 많이 잡아먹는다.*/