#include <stdio.h>

struct student
{
	int id;
	char name[20];
	double grade;
};

int d(void)
{
	struct student s1 = { 315, "홍길동", 2.4 },
		s2 = { 316, "이순신", 3.7 },
		s3 = { 317, "세종대왕", 4.4 }; // 같은 형식의 여러 구조체를 초기화
	
	struct student max; // 최대값을 저장할 구조체 변수 선언

	max = s1; // s1 을 최고 학점으로 가정

	if (s2.grade > max.grade) max = s2;
	if (s3.grade > max.grade) max = s3;

	printf("학번 : %d\n", max.id);
	printf("이름 : %s\n", max.name);
	printf("학번 : %.1f\n", max.grade);

	return 0;
}