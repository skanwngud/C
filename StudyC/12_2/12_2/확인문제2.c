#include <stdio.h>
#include <string.h>

int g(void)
{
	char str[16];
	int i;

	printf("�ܾ� �Է� : ");
	scanf("%s", &str);
	printf("�Է��� �ܾ� : %s\n", str);

	for (i = 0; i < strlen(str); i++)
	{
		if (i >= 5)
		{
			str[i] = '*';
		}
	}
	
	printf("������ �ܾ� : %s", str);

	return 0;
}