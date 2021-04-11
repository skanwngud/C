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
			printf("자");
			break;
		}
		case 5:
		{
			printf("축");
			break;
		}
		case 6:
		{
			printf("인");
			break;
		}
		case 7:
		{
			printf("묘");
			break;
		}
		case 8:
		{
			printf("진");
			break;
		}
		case 9:
		{
			printf("사");
			break;
		}
		case 10:
		{
			printf("오");
			break;
		}
		case 11:
		{
			printf("미");
			break;
		}
		case 0:
		{
			printf("신");
			break;
		}
		case 1:
		{
			printf("유");
			break;
		}
		case 2:
		{
			printf("술");
			break;
		}
		case 3:
		{
			printf("해");
			break;
		}
		default:
			break;
		}
	}
	else
	{
		printf("1900년 이상의 년도를 입력하세요");
	};

	return 0;
}