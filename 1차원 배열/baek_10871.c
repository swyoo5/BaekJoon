#include <stdio.h>

#define MAX 100

int main(void)
{
	int N, X, A[MAX], num;
	int *p = A;

	scanf("%d %d", &N, &X);

	while (N) {
		scanf("%d ", &num);
		*p++ = num;
		N--;		
	}

	p = A;
	for (*p != '\0') {
		if (*p < X) {
			printf("%d ", *p);
		}
		p++;
	}
	printf("\n");
	return 0;
}
