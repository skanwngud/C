#include <stdio.h>

int main(void)
{
	int a = 10; // a ��� ������ �ʱ�ȭ
	
	if (a >= 0) {
		a = 1; // 0 �̻��� ��� 1
	}
	else {
		a = -1; // 0 �̻��� �ƴ� ��쿡 -1
	}

	printf("a : %d\n", a);

	return 0;
}

/* if else �� �߰�ȣ�� ���� ����. 
   else ���� ���� ���ǽ��� ������ �ʴ´�. */