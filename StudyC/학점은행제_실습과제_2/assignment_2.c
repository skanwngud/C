#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int select;

	char name[20];
	char system[20];
	char domain[20];
	char organization[20];
	char country[20];
	char mail;

	printf("choose select : ");
	scanf("%d", &select);
	scanf("%s", &mail);

	if (select == 1)
	{
		printf("select is 1");
		name[20] = gets_s(mail, "@");
		printf("%s", name);
	}

	else
	{
		printf("select is 2");
	}
	return 0;
}