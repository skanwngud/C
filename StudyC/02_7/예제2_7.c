#include <stdio.h>

int main(void)
{
	printf("%c\n", 'A'); // ���� ���
	printf("%s\n", "A"); // ���ڿ� ���
	printf("%c�� %s �Դϴ�.", '1', "first"); // ���ڿ� ���ڿ� ����� ���� ���

	return 0;
}

/* ���ڴ� character, c
���ڿ��� string, s �� ǥ���Ѵ�.

#include <stdio.h>

int main(void)
{
	printf("�й� : %d\n", 32165);
	printf("�̸� : %s\n", ȫ�浿);
	printf("���� : %c\n", 'A');
	
	return 0;
}*/