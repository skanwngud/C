#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main(void)
{
	int select;

	char name;
	char system;
	char domain;
	char organization;
	char country;
	char* mail = NULL;
	char input[] = "";
	

	printf("선택하세요 : ");
	scanf("%d", &select);
	scanf("%s", &input);
	
	mail = strlwr(input);
	printf("%s", mail);

	return 0;
}