#include <stdio.h>

#define MAX 100

int main(void)
{
	int M, N, i, j, basket[MAX], temp[MAX], n1, n2; // M : 바구니 개수 N : 역순으로 바꿀 횟수

	scanf("%d %d", &M, &N);
	for (i = 1; i <= M; i++) {
		basket[i - 1] = i;	
	} 

	for (i = 0; i < N; i++) {
		scanf("%d %d", &n1, &n2);
		for (j = n2 - 1; j >= n1 - 1; j--) {
			temp[n1 + n2 - 2 - j] = basket[j];
		} 
		
		for (j = n1 - 1; j <= n2 - 1; j++) {
			basket[j] = temp[j];
		}	
	}
	
	for (i = 0; i < M; i++) {
		printf("%d ", basket[i]);
	}	
	printf("\n");
	return 0;
}
