#include <stdio.h>

int a(void)
{
	char ch;
	int i;

	for (i = 0; i < 3; i++)
	{
		scanf("%c", &ch);
		printf("%c", ch);
	}

	return 0;
}

// tiger
// tig <- tiger �� �Է������� scanf �� 3���� �ݺ���
// 3�� �ݺ��ϴ� ���� ���ۿ� ���ڰ� ����