#include <stdio.h>

int main(void)
{
	int year, gap;

	scanf("%d", & year);
	
	gap = year % 12;

	if (year > 1899)
	{
		switch (gap)
		{
		case 4:
		{
			printf("��");
			break;
		}
		case 5:
		{
			printf("��");
			break;
		}
		case 6:
		{
			printf("��");
			break;
		}
		case 7:
		{
			printf("��");
			break;
		}
		case 8:
		{
			printf("��");
			break;
		}
		case 9:
		{
			printf("��");
			break;
		}
		case 10:
		{
			printf("��");
			break;
		}
		case 11:
		{
			printf("��");
			break;
		}
		case 0:
		{
			printf("��");
			break;
		}
		case 1:
		{
			printf("��");
			break;
		}
		case 2:
		{
			printf("��");
			break;
		}
		case 3:
		{
			printf("��");
			break;
		}
		default:
			break;
		}
	}
	else
	{
		printf("1900�� �̻��� �⵵�� �Է��ϼ���");
	};

	return 0;
}