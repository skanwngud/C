#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profilecc // ����� ���� ����ü ����
{
	int age;
	double height;
};

struct studentcc
{
	struct profilecc pfcc; // ����ü�� ����� �ٸ� ����ü�� ����Ѵ�
	int id;
	double grade;
};

int cc(void)
{
	struct studentcc yuni;

	yuni.pfcc.age = 17; // ����ü ���� ����ü�̹Ƿ� �����ڸ� �߰� ���
	yuni.pfcc.height = 164.5;
	yuni.id = 315;
	yuni.grade = 4.3;

	printf("���� : %d\n", yuni.pfcc.age);
	printf("���� : %.1f\n", yuni.pfcc.height);
	printf("���̵� : %d\n", yuni.id);
	printf("���� : %.1f\n", yuni.grade);

	return 0;
}