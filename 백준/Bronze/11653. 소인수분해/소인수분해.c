#include <stdio.h>

int main(void) {
    int N;
    int i;
    
    scanf("%d", &N);
    
    for (i = 2; i <= N; i++) {
        while (N % i == 0) {
            printf("%d\n", i);
            N /= i;
        }
    }
    return 0;
}