#include <stdio.h>

int main(void)
{
	int a = 10;
	double b = 3.4;

	printf("int ���� ���� ũ�� : %d\n", sizeof(int)); // ������
	printf("double ���� ���� ũ�� : %d\n", sizeof(double)); // �Ǽ���
	printf("������ ����� ũ�� : %d\n", sizeof(a)); // ������
	printf("������ ������� ũ�� : %d\n", sizeof(1.5+3.4)); // �Ǽ���
	printf("char�� �ڷ����� ũ�� : %d\n", sizeof(char)); // ����

	return 0;
}
/* sizeof(a) �� ��� sizeof a ��� ����� �� ������ sizeof(1.5 + 3.4) ���� ��쿡��
sizeof 1.5 + 3.4 �� �� ��� sizeof 1.5 = 8, 8 + 3.4 �� ������ �Ǿ�
11.4 �� �Ǿ������ sizeof char �� ������ �ǹǷ� ������ �߻��� �� �ִ�.*/