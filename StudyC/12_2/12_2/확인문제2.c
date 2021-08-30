#include <stdio.h>
#include <string.h>

int g(void)
{
	char str[16];
	int i;

	printf("단어 입력 : ");
	scanf("%s", &str);
	printf("입력한 단어 : %s\n", str);

	for (i = 0; i < strlen(str); i++)
	{
		if (i >= 5)
		{
			str[i] = '*';
		}
	}
	
	printf("생략한 단어 : %s", str);

	return 0;
}