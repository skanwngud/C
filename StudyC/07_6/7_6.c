// ����Լ��� ������ ����

#include <stdio.h>

void fruit(void);

int main(void)
{
	fruit(1); // ó�� ȣ�� Ƚ���� ���� 1�� �ش�

	return 0;
}

void fruit(int count) // ȣ�� Ƚ���� �Ű������� ����
{
	printf("apple\n");
	if (count == 3) return; // ȣ�� Ƚ���� 3 �� �Ǹ� ��ȯ�ϰ� ������
	fruit(count + 1); // ȣ�� Ƚ���� �ϳ��� ������Ŵ
}