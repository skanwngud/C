#include <stdio.h>

int c(void)
{
	char str[80]; // �迭����
	printf("���ڿ� �Է� : ");
	scanf("%s", str); // scanf �� ���� �Է� (apple jam)
	printf("ù ��° �ܾ� : %s\n", str); // apple
	scanf("%s", str); // ���ۿ� ���� jam �̶� �ܾ str �迭�� �Է� ��
	printf("���ۿ� �����ִ� �� ��° �ܾ� : %s\n", str); // jam

	return 0;
}