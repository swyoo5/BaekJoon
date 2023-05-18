#include <stdio.h>

#define MAX 100

int main(void)
{
	int N, score, score_arr[MAX], max = 0, i;
	double total = 0.0;

	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &score);
		score_arr[i] = score;
		if (score > max) {
			max = score;
		}
	}

	for (i = 0; i < N; i++) {
		total += (double) score_arr[i] * 100 / max;
	}
	printf("%lf\n", (double) total / N); 	
	return 0;
}
