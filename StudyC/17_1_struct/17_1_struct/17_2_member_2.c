#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profilecc // 멤버로 쓰일 구조체 선언
{
	int age;
	double height;
};

struct studentcc
{
	struct profilecc pfcc; // 구조체의 멤버로 다른 구조체를 사용한다
	int id;
	double grade;
};

int cc(void)
{
	struct studentcc yuni;

	yuni.pfcc.age = 17; // 구조체 안의 구조체이므로 연산자를 추가 사용
	yuni.pfcc.height = 164.5;
	yuni.id = 315;
	yuni.grade = 4.3;

	printf("나이 : %d\n", yuni.pfcc.age);
	printf("신장 : %.1f\n", yuni.pfcc.height);
	printf("아이디 : %d\n", yuni.id);
	printf("학점 : %.1f\n", yuni.grade);

	return 0;
}