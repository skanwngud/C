#include <stdio.h>

void func(int(*fp)(int, int)); // �Լ� �����͸� �Ű��� ���� �Լ�
int sum2(int a, int b);
int mul(int a, int b);
int max(int a, int b);

int c(void)
{
	int sel; // ���� �� �޴� ��ȣ�� ���� �� ����

	printf("01 �� ������ ��\n");
	printf("02 �� ������ ��\n");
	printf("03 �� ���� �߿��� ū �� ���\n");
	printf("���ϴ� ������ �����ϼ��� : \n");
	scanf("%d", &sel);

	switch (sel)
	{
	case 1: func(sum2); break; // 1 ���� �� sum �� �����ϰ� ����
	case 2: func(mul); break; // 2 �� �� �� mul �� �����ϰ� ����
	case 3: func(max); break; // 3 �� �� �� max �� �����ϰ� ����
	}

	return 0;
}

void func(int(*fp)(int, int))
{
	int a, b;
	int res;

	printf("�� ������ ���� �Է��ϼ��� : ");
	scanf("%d%d", &a, &b);
	res = fp(a, b); // �Լ� �����ͷ� ����Ű�� �Լ� ȣ��
	printf("�ᱣ���� : %d\n", res);
}

int sum2(int a, int b)
{
	return (a + b);
}

int mul(int a, int b)
{
	return (a * b);
}

int max(int a, int b)
{
	if (a > b) return a;
	else return b;
}