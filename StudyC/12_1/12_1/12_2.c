#include <stdio.h>

int b(void)
{
	char *dessert = "apple"; // ���ڿ��� �����Ϳ� ����

	printf("���� �Ľ��� %s �Դϴ�.\n", dessert);
	dessert = "banana";
	printf("���� �Ľ��� %s �Դϴ�.\n", dessert);

	return 0;
}