#include <stdio.h>

int main(void)
{
	int N, i, j;

	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		for (j = 0; j < N - 1 - i; j++) {
-			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++) {
			printf("*");	
		}	
		printf("\n");	
	}
	
	for (i = N - 1; i > 0; i--) {
		for (j = N - i; j > 0; j--) {
			printf(" ");
		}
		for (j = 2 * i - 1 ; j > 0; j--) {
			printf("*");	
		}
		printf("\n");	
	}	
	return 0;
}
