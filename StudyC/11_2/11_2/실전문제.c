#include <stdio.h>
#include <string.h>

int main(void)
{
	char input;
	int cnt = 0; // ���� ����
	int max = 0; // �� �ܾ� ����

	do
	{
		input = getchar(); // ���� �Է� ����
		if (input == '\n') // ������ �Է� �޾��� ��
		{
			if (cnt > max)
			{
				max = cnt;
				cnt = 0;
			}
			else {
				cnt = 0;
			}
		}
		cnt++;
	} while (input != -1);

	printf("���̰� ���� �� �ܾ� : %d", max-1);

	return 0;
}