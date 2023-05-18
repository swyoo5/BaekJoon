#include <stdio.h>

int main(void)
{
	int max = 0, i, num, index = 0;

	for (i = 1; i <= 9; i++) {
		scanf("%d", &num);
		if (num > max) {
			max = num;
			index = i;
		}
	}
	printf("\n");
	printf("%d\n%d\n", max, index); 

	return 0;
}
