#include <stdio.h>

int rec_func(int n);

int main_c(void)
{
	int res;

	res = rec_func(10);

	printf("%d\n", res);

	return 0;
}

int rec_func(int n)
{
	if (n == 1) return 1;
	
	else return (n+rec_func(n-1));
}

// 10 + rec_func(9) - 10 + rec_func 을 한 번 더 호출
// 9 + rec_func(8) - 9 + rec_func 을 한 번 더 호출 ... 하여 n == 1 이 되는 순간까지 내려간다
// 8 + ... (7)
// 7 + ... (6)
// 6 + ... (5)
// 5 + ... (4)
// 4 + ... (3)
// 3 + ... (2)
// 2 + ... (1)
// 1
// 그 후 1부터 차례대로 더함