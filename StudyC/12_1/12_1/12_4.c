#include <stdio.h>

int d(void)
{
	char str[80]; // �迭 ����

	printf("������ ������ ���ڿ� �Է� : ");
	gets(str); // str �迭�� gets �� �Է� �� ���ڿ� ����
	printf("�Է� �� ���ڿ��� %s �Դϴ�.\n", str);

	return 0;
}