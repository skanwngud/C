// ���๮�� ����
#include <stdio.h>

int f2(void)
{
	int age;
	char name[20];

	printf("���� : ");
	scanf("%d", &age);
	fgetc(stdin); // ���๮�� ����

	printf("�̸� : ");
	gets(name);

	printf("���� : %d / �̸� : %s", age, name);

	return 0;
}