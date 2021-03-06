#include <stdio.h>

int main(void)
{
	printf("%.1lf\n", 1e6); // 지수형태의 실수를 소수점으로 출력 1000000
	printf("%.7lf\n", 3.14e-5); // 소수점 7번째 자리까지 출력 0.0000314
	printf("%le\n", 0.0000314); // 소수형태의 실수를 지수 형태로 출력 3.140000e-5
	printf("%.2le\n", 0.0000314);  // 소수형태의 실수를 소수점 2번째 자리까지 출력 3.14e-5 

	return 0;
}

/* lf (소수) 의 경우 7자리까지 표현이 되지만 le (지수) 의 경우 6자리까지 밖에 표현이 되질 않는다.
* 따라서 그 유효숫자 (6행의 경우) 를 살리기 위해선 % 와 lf 사이에 .숫자 를 넣어주어 잘리지 않게한다.
*/