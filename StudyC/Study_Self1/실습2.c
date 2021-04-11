#include <stdio.h>

int main_2(void)
{
	int income, grade;
	double tax;

	scanf("%d", &income);
	scanf("%d", &grade);

	if (income < 50000)
	{
		tax = income * 0.02;
	}

	else if (income < 1000000)
	{
		if (grade == 1||2)
		{
			tax = income * 0.02;
		}
		else
		{
			tax = (500000 * 0.02) + (income - 500000) * 0.05;
		}
	}

	else if (income > 1000000)
	{
		if (grade == 1 || 2)
		{
			tax = (1000000 * 0.02) + (income - 1000000) * 0.05;
		}
		else
		{
			tax = (499999 * 0.02) + (999999 * 0.05) + (income - 1499998) * 0.07;
		}
	}

	printf("%.1f", tax);

	return 0;
}