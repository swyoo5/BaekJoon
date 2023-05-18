#include <stdio.h>

int main(void)
{
	int A, B;

	scanf("%d %d", &A, &B);
	printf("%.13lf\n", (double) A/B);

	return 0;
}
