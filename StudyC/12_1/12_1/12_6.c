// ���ۿ� ���๮�ڰ� �����־� ����� ����� ���ϴ� ���
#include <stdio.h>

int f(void)
{
	int age;
	char name[20];

	printf("���� : ");
	scanf("%d", &age);

	printf("�̸� :");
	gets(name);

	printf("���� : %d / �̸� : %s\n", age, name);

	return 0;
}