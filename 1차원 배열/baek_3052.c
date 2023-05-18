#include <stdio.h>

int main(void)
{
	int num, i, remainder[42] = {0}, result = 0;

	for (i = 0; i < 10; i++) {
		scanf("%d", &num);
		remainder[num % 42] = 1;
	}

	for (i = 0; i < 42; i++) {
		if (remainder[i] == 1) {
			result++; 
		}
	}

	printf("\n%d\n", result);	
	return 0;
}
