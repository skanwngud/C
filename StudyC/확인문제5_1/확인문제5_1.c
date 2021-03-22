#include <stdio.h>

int main_a(void)
{
	int chest = 95;
	char size;

	if (chest <= 90) {
		size = 'S';
	}

	else if (90 < chest <= 100) {
		size = 'M';
	}

	else {
		size = 'L';
	}

	printf("%c\n\n", size);

	return 0;
}