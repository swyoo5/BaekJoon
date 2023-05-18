#include <stdio.h>

#define MAX 100

int main(void)
{
	int M, N, basket[MAX] = {0}, i, j, n1, n2, n3;

	scanf("%d %d", &M, &N);
	for (i = 0; i < N; i++) {
		scanf("%d %d %d", &n1, &n2, &n3);
		for (j = n1 - 1; j < n2; j++) {
			basket[j] = n3;
		}	
	}

	for (i = 0; i < M; i++) {
		printf("%d ", basket[i]);
	}
	printf("\n");
	return 0;
}
