#include <stdio.h>

int main(void)
{
	float ft = 1.234567890123456789; // 유효숫자가 많은 변수 할당
	double db = 1.234567890123456789;

	printf("float 형의 변수의 값 : %.20f\n", ft);
	printf("double 형의 변수의 값 : %.20lf\n", db);

	return 0;
}

/* 해당 코드를 실행하게 되면 결과값이 입력값과 다르게 되는데,
float 의 경우는 소수점 7번째 자리, double 형은 15번째자리까지의 범위 내에서 사용하는 것이 좋다.
각각 해당 범위 이상으로 나가게 되면 차이가 날 수 있기 때문*/