#include <stdio.h>

int main_a(void)
{
	int n;
	printf("���� �Է� : ");
	scanf("%d", &n);
	switch (n % 3)
	{
	case 0:
		printf("����");
		break;

	default:
		printf("��");
		break;
	}

	return 0;
	
}