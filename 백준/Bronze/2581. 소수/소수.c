#include <stdio.h>

#define MAX 10000

int main(void) {
    int M, N, sum = 0, prime_arr[MAX] = {0}, index = 0;
    int i, j;
    
    scanf("%d\n%d", &M, &N);
    for (i = M; i <= N; i++) {
        int factor = 0;
        
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                factor++;
            }
        }
        if (factor == 2) {
            prime_arr[index++] = i;
            sum += i;
        }
    }
    if (prime_arr[0] == 0) {
        printf("-1\n");
        return 0;
    }
    printf("%d\n%d", sum, prime_arr[0]);
    return 0;
}