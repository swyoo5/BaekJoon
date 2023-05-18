#include <stdio.h>

#define MAX 100

int main(void)
{
	int N, num, min = 1000001, max = -1000001, i;

	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf("%d", &num);
		if (num > max)
			max = num;
		if (num < min)
			min = num;
	}
	
	printf("%d %d\n", min, max);
	return 0;
}
