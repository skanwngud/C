#include <stdio.h>
#include <stdlib.h> // malloc, free �Լ��� ���� include

int a(void)
{
	int *pi;
	double *pd;

	pi = (int *)malloc(sizeof(int));
	if (pi == NULL)
	{
		printf("# �޸𸮰� �����մϴ�.\n");
		exit(1); // ���α׷� ����
	}
	
	pd = (double *)malloc(sizeof(double));

	*pi = 10; // �����ͷ� ���� �Ҵ� ���� ���
	*pd = 3.4; // �����ͷ� ���� �Ҵ� ���� ���
	
	printf("���������� ��� : %d\n", *pi); // ���� �Ҵ� ������ ���� �� �� ���
	printf("�Ǽ������� ��� : %.1f\n", *pd); // ���� �Ҵ� ������ ���� �� �� ���

	free(pi); // �޸� ��ȯ
	free(pd); // �޸� ��ȯ

	return 0;
}