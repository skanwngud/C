#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char **ps); // �Լ� ����

int b(void)
{
	char temp[80];
	char *str[21] = { 0 }; // ���ڿ��� ������ ������, �� �����ͷ� �ʱ�ȭ
	int i = 0;

	while (i < 20)
	{
		printf("���ڿ��� �Է��ϼ��� : ");
		gets(temp);
		if (strcmp(temp, "end") == 0) break; // ���ڿ��� end �� �Է� �Ǹ� ����

		str[i] = (char *)malloc(strlen(temp) + 1); // ���ڿ� ���� ���� �Ҵ�
		strcpy(str[i], temp);
		i++;
	}

	print_str(str);

	for (i = 0; str[i] != NULL; i++)
	{
		free(str[i]);
	}

	return 0;
}

void print_str(char **ps)
{
	while (*ps != NULL)
	{
		printf("%s\n", *ps);
		ps++;
	}
}