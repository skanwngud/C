#include <stdio.h>

int main(void)
{
	int rank = 2, m = 0;

	switch (rank) // rank ���� ������ Ȯ��
	{
	case 1: // rank �� 1�� �� m = 300 �� �����ϰ� switch �� Ż��
		m = 300;
		break;
		
	case 2: // rank �� 2 �� �� m = 200 �� �����ϰ� switch �� Ż��
		m = 200;
		break;

	case 3: // rank �� 3 �� �� m = 100 �� �����ϰ� switch �� Ż��
		m = 100;
		break;

	default: // m = 10 �� �����ϰ� switch �� Ż��
		m = 10;
		break;
	}

	printf("%d\n", m);

	return 0;
}

/* if �����ε� �ٲ㼭 ��� �����ϳ�
   switch ���� ��� �������� ���� ���� ������ �����ϱ⿡ ���� �����̸� ������ �˻��ϴ� ���� �־�� ���� ���ϴ�.
   
   ���� switch ������ break �� �׻� �� �ʿ�� ������,
   Ư�� ��ġ���� switch ���� ���������ų� �ϴ� ���� ������ �����ϸ�,
   ���� break �� ���� ���� ������ Ÿ���� ���⿡ break �� ���� switch ���� �߸� �� �ڵ�� ���� ���� ������ �����Ѵ�.*/