#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a(void)
{
	char temp[80]; // �迭 ����
	char *str[3]; // ������ �迭
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("���ڿ��� �Է��ϼ��� : ");
		gets(temp);
		str[i] = (char *)malloc(strlen(temp) + 1); // ���ڿ� ���� ���� �Ҵ�
		strcpy(str[i], temp); // ���� �Ҵ� ������ ���ڿ� ����
	}

	for (i = 0; i < 3; i++)
	{
		printf("%s\n", str[i]);
	}

	for (i = 0; i < 3; i++)
	{
		free(str[i]); // ���� �Ҵ� ���� �޸� ��ȯ
	}

	return 0;
}