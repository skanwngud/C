#include <stdio.h>
#include <string.h>

int main(void)
{
	char fruit[20] = "strawberry"; // fruit �� strawberry �� �ʱ�ȭ

	printf("%s\n", fruit); // �迭�� ���� �� ���ڿ� ���
	strcpy(fruit, "banana"); // �迭�� �� ���ڿ� ����
	printf("%s\n", fruit); // banana ���

	return 0;
}

// strcpy (string copy) �� �̹� �ʱ�ȭ �� �迭�� ���ο� ���ڿ��� ������ ��ġ��Ų��.
