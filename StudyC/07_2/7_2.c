#include <stdio.h>

int get_num_a(void); // �Լ� ����

int main_a(void)
{
	int result;

	result = get_num_a(); // �Լ� ȣ��, ��ȯ���� result �� ����
	printf("��ȯ�� : %d\n", result); // ��ȯ�� ���

	return 0;
}

int get_num_a(void) // �Ű������� void �� ���� ����
{
	int num; // Ű���� �Է°��� ������ ����

	printf("��� �Է� : ");
	scanf("%d", &num); // Ű���� �Է�

	return num; // �Է°� ��ȯ
}