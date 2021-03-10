// 변수 설정

#include <stdio.h>

int main(void)
{ // 중괄호 범위 내에서 변수를 선언 및 대입하여 사용 가능
	int a; // 변수 a 선언
	int b, c; // 변수 b, c 동시에 선언
	double da; // 실수형 변수 da  선언
	char ch; // 문자형 변수 ch 선언 (문자열도 char 로 쓴다)

	a = 10; // int 형 변수 a에 10 을 대입
	b = a; // int 형 변수 b 에 10 인 a 를 대입
	c = a + 20; // int 형 변수 c 에 10 인 a 를 대입 후 연산자 + 를 이용해 20을 더함
	da = 3.5; // double 형 변수 da 에 3.5 를 대입
	ch = 'A'; // character 형 변수 ch 에 문자 'A' 를 대입

	printf("변수 a 의 값 : %d\n", a);
	printf("변수 b 의 값 : %d\n", b);
	printf("변수 c 의 값 : %d\n", c);
	printf("변수 da 의 값 : %.1lf\n", da);
	printf("변수 ch 의 값 : %c\n", ch);

	return 0;
}