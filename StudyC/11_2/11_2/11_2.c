#include <stdio.h>

int b(void)
{
	int res;
	char ch;

	while (1) // ���� �ݺ���
	{
		res = scanf("%c", &ch); // ���� �Է�, ctrl + z ������ -1 ��ȯ
		if (res == -1) break; // scanf ���� -1 ��ȯ �Ǹ� ����
		printf("%d", ch); // ch �� �ƽ�Ű�ڵ带 ��ȯ
	}

	return 0;
}