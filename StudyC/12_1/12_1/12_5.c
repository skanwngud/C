#include <stdio.h>


int e(void)
{
	char str[80];

	printf("������ ���� �� ���ڿ� �Է� : ");
	fgets(str, sizeof(str), stdin); // ���ڿ� �Է�

	printf("�Է� �� ���ڿ��� %s �Դϴ�.\n", str);

	return 0;
}