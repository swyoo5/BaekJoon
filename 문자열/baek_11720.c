#include <stdio.h>

#define MAX 100

int main(void)
{
	int N, i, total = 0;
	char num[MAX];

	scanf("%d", &N);
	scanf("%s", num);

	for (i = 0; i < N; i++) {
		total += num[i] - '0'; 
	}
	printf("%d\n", total);

	return 0;
}
