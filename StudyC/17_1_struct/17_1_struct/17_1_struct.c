#include <stdio.h>

struct student // ����ü ����
{
	int num;
	double grade;
};

int a(void)
{
	struct student s1; // ����ü�� ������ ����

	s1.num = 2;
	s1.grade = 2.7;

	printf("�ѹ� : %d\n", s1.num);
	printf("���� : %.1f\n", s1.grade);

	return 0;
}