#include <stdio.h>

int main(void)
{
	char grade;
	char name[20];

	printf("���� �Է� :");
	scanf("%c", &grade);
	printf("�̸� �Է� : ");
	scanf("%s", name);
	printf("%s �� ������ %c �Դϴ�.", name, grade);

	return 0;
}