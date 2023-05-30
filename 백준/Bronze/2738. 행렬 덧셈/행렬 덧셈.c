#include <stdio.h>

#define MAX 100

int main(void) {
    int M, N, num;
    int i, j, k;
    int arr[MAX][MAX] = { 0 };

    scanf("%d %d", &M, &N);
    for (i = 0; i < 2; i++) {
        for (j = 0; j < M; j++) {
            for (k = 0; k < N; k++) {
                scanf("%d ", &num);
                arr[j][k] += num;
            }
        }
    }

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}