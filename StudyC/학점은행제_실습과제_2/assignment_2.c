#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main_aa(void)
{
	// ���� ����
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
	
	// select �� �Է�
	printf("�����ϼ��� : ");
	scanf("%d", &select);
	
	// 1���� ��� email �� �� ��ҷ� ���
	if (select == 1)
	{
		// email �Է�
		scanf("%s", &input);

		// �ҹ��� ġȯ
		mail = strlwr(input);

		// @ �� . ���� �������� �з�
		char* name = strtok(mail, "@.");

		// �з� �� ���ڵ� �� �迭�� ����
		while (name != NULL)
		{
			a[i] = name;
			i++;
			name = strtok(NULL, "@.");
			
			// ����(country) ���� ���� ��� usa �� �Է�
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

	// 2���� ��� �� ��Ҹ� email �� ���
	else if(select == 2)
	{
		scanf("%s%s%s%s%s", s1, s2, s3, s4, s5);
		printf("E-mail : %s@%s.%s.%s.%s", s1, s2, s3, s4, s5);
	}

	return 0;
}