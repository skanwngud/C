#include <stdio.h>

void my_gets(char *str, int size);

int c(void)
{
	char str[7];

	my_gets(str, sizeof(str));
	printf("�Է��� ���ڿ� : %s\n", str);

	return 0;
}

void my_gets(char *str, int size)
{
	int ch;
	int i = 0; // ���� ����� �ʱ�ȭ

	ch = getchar(); // ���� �Է�

	while ((ch != '\n') && (i < size - 1)) // �迭�� ũ�⸸ŭ �Է�
		// ch �� ������ �ƴϰ� i �� size - 1 ���� ���� ��
	{
		str[i] = ch; // �迭�� i ��°�� ch �� ����
		i++; // i ����
		ch = getchar(); // ���ο� ���� �Է�
	}

	str[i] = '\0';
}