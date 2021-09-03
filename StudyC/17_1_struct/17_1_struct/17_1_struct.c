#include <stdio.h>

struct student // 구조체 선언
{
	int num;
	double grade;
};

int a(void)
{
	struct student s1; // 구조체를 변수로 선언

	s1.num = 2;
	s1.grade = 2.7;

	printf("한번 : %d\n", s1.num);
	printf("학점 : %.1f\n", s1.grade);

	return 0;
}