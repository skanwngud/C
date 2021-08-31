#include <stdio.h>

int main(void)
{
	char fruit[20] = "strawberry";

	printf("딸기 : %s\n", fruit);
	printf("딸기쨈 : %s %s\n", fruit, "jam"); // 앞의 %s 는 fruit 의 strawberry 를, 뒤의 %s 는 'jam' 을 받는다.

	return 0;
}