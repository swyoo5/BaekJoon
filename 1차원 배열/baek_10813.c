#include <stdio.h>

#define MAX 100

int main(void)
{
	int M, N, basket[MAX], i, n1, n2, temp;

	scanf("%d %d", &M, &N);
	for (i = 0; i < M; i++) {
		basket[i] = i + 1;
	} 

	for (i = 0; i < N; i++) {
		scanf("%d %d", &n1, &n2);
		temp = basket[n1-1];
		basket[n1-1] = basket[n2-1];
		basket[n2-1] = temp;
	}

	for (i = 0; i < M; i++) {
		printf("%d ", basket[i]);	
	}
	printf("\n");
	return 0;
}
