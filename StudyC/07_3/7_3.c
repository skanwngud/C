#include <stdio.h>

void print_char(char ch, int count); // �Լ� ���� (��ȯ���� void �� ó��)

int main(void)
{
	print_char('@', 5);

	return 0;
}

void print_char(char ch, int count)
{
	int i;

	for (i = 0; i < count; i++) // �ݺ�, ����, ��� �� �� �����ݷ�(;) ��� ����
	{
		printf("%c", ch);
	}

	return; // ��ȯ�� �����Ƿ� �ܵ����� ���
}