#include <stdio.h>

int main(void)
{
	short sh = 32767; // short ���� �ִ밪
	int in = 2147483647; // int ���� �ִ밪
	long ln = 2147483647; // long ���� �ִ밪 
	long long lln = 123451234512345; // ���� ū �� (long long ���� �ִ밪�� �ƴ�)

	printf("short�� ���� ��� : %d\n", sh);
	printf("int�� ���� ��� : %d\n", in);
	printf("long �� ���� ��� : %ld\n", ln);
	printf("long long �� ���� ��� : %lld\n", lln);
	printf("long long ���� ũ�� : %d ����Ʈ\n", sizeof(long long)); // 8 ����Ʈ�� ��� ��

	return 0;
}

/* int ���� ������ �⺻���̹Ƿ� ����ӵ��� ���� ������.
short ���� �޸𸮸� ���� ������ ������ �� int ������ ��ȯ�� �ǹǷ� �ӵ��� ���� �� �ִ�.
long �� long long ���´� int ���� ���� ���� ǥ���� �� ������ �׸�ŭ �޸𸮸� ���� ��ƸԴ´�.*/