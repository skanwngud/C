// �ּ� ������
#include <stdio.h>

int main(void)
{
	int a; // int �� ���� ���� (4byte)
	double b; // double �� ���� ���� (8byte)
	char c; // char �� ���� ���� (1byte)

	printf("int �� ������ �ּ� : %u\n", &a); // �ּ� �����ڷ� �ּ� ���
	printf("double �� ������ �ּ� : %u\n", &b);
	printf("char �� ������ �ּ� : %u\n", &c);

	return 0;
}