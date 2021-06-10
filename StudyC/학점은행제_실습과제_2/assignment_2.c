#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main(void)
{
	int select;
	int i;

	//char *name;
	//char *system;
	char *domain;
	char *organization;
	char *country;
	char *mail = NULL;
	char input[100] = "";

	char email[5] = {""};
	

	printf("선택하세요 : ");
	scanf("%d", &select);
	
	if (select == 1)
	{
		scanf("%s", &input);
		mail = strlwr(input);
		/*for (i = 0; i < str(mail); i++)
		{
			if(mail)
		}*/
		char* name = strtok(mail, "@");
		printf("name : %s\n", name);


	}

	else if(select == 2)
	{
		printf("2를 선택했습니다\n");

		for (i = 0; i < 5; i++)
		{
			scanf("%s", &email[i]);
			email[4] += email[i];
		}
		

	}

	return 0;
}