#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profilebb
{
	char name[20];
	int age;
	double height;
	char *intro;
};

int b(void)
{
	struct profilebb yuni;

	strcpy(yuni.name, "������");
	yuni.age = 21;
	yuni.height = 164.5;

	yuni.intro = (char *)malloc(80); // �� ������ 80 ����Ʈ¥�� �޸𸮸� �Ҵ���
	printf("�ڱ�Ұ� : ");
	gets(yuni.intro);

	printf("�̸� : %s\n", yuni.name);
	printf("���� : %d\n", yuni.age);
	printf("���� : %.1f\n", yuni.height);
	printf("�ڱ�Ұ� : %s", yuni.intro);

	free(yuni.intro);

	return 0;
}