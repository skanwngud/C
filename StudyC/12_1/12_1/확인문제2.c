#include <stdio.h>

int main(void)
{
	char ani[20];
	char why[80];

	printf("�����ϴ� ���� : ");
	scanf("%s", ani);
	// �ʿ��� ����
	getchar();
	printf("�����ϴ� ���� : ");
	fgets(why, sizeof(why), stdin);
	printf("%s is %s", ani, why);

	return 0;
}

// �����ϴ� ���� : dog
// �����ϴ� ���� : very faithful
// dog is very faithful

// �����ϴ� ���� : dog
// �����ϴ� ���� : dog is