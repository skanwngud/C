#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main_aa(void)
{
	// 변수 선언
	int select;
	int i = 0;

	char *mail = NULL;
	char input[100] = "";
	char *a[10] = { NULL, };

	char s1[100];
	char s2[100];
	char s3[100];
	char s4[100];
	char s5[100];
	
	// select 값 입력
	printf("선택하세요 : ");
	scanf("%d", &select);
	
	// 1번인 경우 email 을 각 요소로 출력
	if (select == 1)
	{
		// email 입력
		scanf("%s", &input);

		// 소문자 치환
		mail = strlwr(input);

		// @ 와 . 문자 기준으로 분류
		char* name = strtok(mail, "@.");

		// 분류 된 문자들 각 배열에 저장
		while (name != NULL)
		{
			a[i] = name;
			i++;
			name = strtok(NULL, "@.");
			
			// 국가(country) 값이 없을 경우 usa 로 입력
			if (a[4] == NULL)
			{
				a[4] = "usa";
			}
		}
		
		printf("name : %s\n",a[0]);
		printf("system : %s\n", a[1]);
		printf("domain : %s\n", a[2]);
		printf("orgnazation : %s\n", a[3]);
		printf("country : %s\n", a[4]);
	}

	// 2번인 경우 각 요소를 email 로 출력
	else if(select == 2)
	{
		scanf("%s%s%s%s%s", s1, s2, s3, s4, s5);
		printf("E-mail : %s@%s.%s.%s.%s", s1, s2, s3, s4, s5);
	}

	return 0;
}