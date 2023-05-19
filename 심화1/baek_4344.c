#include <stdio.h>

#define MAX 1000

int main(void)
{
	int C, N, score, total_score = 0, count = 0;
	int i, j;
	int score_arr[MAX];

	scanf("%d", &C);

	for (i = 0; i < C; i++) {
		total_score = 0;
		count = 0;
		scanf("%d", &N);
		for (j = 0; j < N; j++) {
			scanf("%d", &score);
			score_arr[j] = score;
			total_score += score;	
		}
		printf("평균 : %lf\n", (double) total_score / N);
		for (j = 0; j < N; j++) {
			if (score_arr[j] > (double) total_score / N) {
				count++;
			}
			score_arr[j] = 0;
		}
		printf("%lf\n", (double) count / N * 100);
	}
	return 0;
}
