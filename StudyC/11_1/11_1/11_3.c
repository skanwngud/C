#include <stdio.h>

int b(void)
{
	int ch;

	ch = getchar(); // �Լ��� ��ȯ�ϴ� ���ڸ� �ٷ� ����
	printf("�Է��� ���� : ");
	putchar(ch); // �Է��� ���� ���
	putchar('\n');

	return 0;
}