#include <stdio.h>

int main_2(void)
{
	int res;
	
	res = sizeof(short) > sizeof(long);
	// short �� ����Ʈ ũ�Ⱑ long ���� ũ�� ���̹Ƿ� 1, �����̸� 0�� ���� res �� �����Ѵ�.

	res = (res == 1) ? "short" : "long";
	// res �� 1 �� �� short ��, 0 �� �� long �� ����Ѵ�.
	// �� �Ŀ��� short �� long ���� ũ�Ⱑ �����Ƿ� res �� 0 �� ���� �ȴ�.

	printf("%s\n", res);
	return 0;
}