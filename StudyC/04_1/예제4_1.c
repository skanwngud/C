#include <stdio.h>

int main(void)
{
	int a, b;
	int sum, sub, mul, inv;

	a = 10; // ���Կ���(=)
	b = 20; // ���Կ���(=)
	sum = a + b; // �������(+) �� ���Կ��� (=)
	sub = a - b; // �������(-) �� ���Կ��� (=)
	mul = a * b; // �������(*) �� ���Կ��� (=)
	inv = -a; // ������� (-) : �ǿ����ڸ� �ϳ��� �Ἥ ������ ����ȭ ���״�.

	printf("a �� �� : %d, b �� �� : %d", a, b);
	printf("\t���� : %d", sum);
	printf("\t���� : %d", sub);
	printf("\t���ϱ� : %d", mul);
	printf("\ta�� ���� ���� : %d", inv);

	return 0;
}