// �����͸� ����� �� ������ �� ��ȯ
#include <stdio.h>

void swap(int* pa, int* pb); // �� ������ ���� �ٲٴ� �Լ��� ����

int main(void)
{
	int a = 10, b = 20;

	swap(&a, &b);
	printf("a : %d, b : %d\n", a, b);

	return 0;
}

void swap(int* pa, int* pb)
{
	int temp; // ��ȯ�� ���� �ӽ� ����

	temp = *pa; // temp �� pa �� ����Ű�� ������ �� ����
	*pa = *pb; // pa �� ����Ű�� ������ pb �� ����Ű�� ������ �� ����
	*pb = temp; // pb �� ����Ű�� ������ temp �� ����
}