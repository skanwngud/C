#include <stdio.h>

int add_ten(int a);

int a(void)
{
	int a = 10;

	a = add_ten(a); // �Լ� ȣ��, a ���� �����Ͽ� ����
	printf("a : %d\n", a);

	return 0;
}

int add_ten(int a) // main �Լ��ʹ� �ٸ� �������� ���� ���� �Ҵ�
{
	a = a + 10; // �Ű������� 10 �� ���Ѵ�

	return a;
}