// ���� ����

#include <stdio.h>

int main(void)
{ // �߰�ȣ ���� ������ ������ ���� �� �����Ͽ� ��� ����
	int a; // ���� a ����
	int b, c; // ���� b, c ���ÿ� ����
	double da; // �Ǽ��� ���� da  ����
	char ch; // ������ ���� ch ���� (���ڿ��� char �� ����)

	a = 10; // int �� ���� a�� 10 �� ����
	b = a; // int �� ���� b �� 10 �� a �� ����
	c = a + 20; // int �� ���� c �� 10 �� a �� ���� �� ������ + �� �̿��� 20�� ����
	da = 3.5; // double �� ���� da �� 3.5 �� ����
	ch = 'A'; // character �� ���� ch �� ���� 'A' �� ����

	printf("���� a �� �� : %d\n", a);
	printf("���� b �� �� : %d\n", b);
	printf("���� c �� �� : %d\n", c);
	printf("���� da �� �� : %.1lf\n", da);
	printf("���� ch �� �� : %c\n", ch);

	return 0;
}