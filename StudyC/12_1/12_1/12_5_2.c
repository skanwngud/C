// 12_5.c ���๮�� ����
#include <stdio.h>
#include <string.h> // ���� ���� �Լ�

int e2(void)
{
	char str[80];

	printf("�迭�� ������ ���ڿ� �Է� : ");
	fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = '\0';
	// str �迭�� ������ �ڿ��� �� ��°�ڸ��� �ι��ڷ� �ٲ� �ٷ� ������ ��
	printf("�Է� �� ���ڿ��� %s �Դϴ�.", str);

	return 0;
}