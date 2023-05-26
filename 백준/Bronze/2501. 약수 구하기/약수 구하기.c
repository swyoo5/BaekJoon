#include <stdio.h>

int main(void){
    int N, K, count = 1;
    
    scanf("%d %d", &N, &K);
    for (int i = 1; i <= N; i++){
        if (N % i == 0){
            if (K == count){
                printf("%d\n", i);
                return 0;
            }
            count++;
        }
    }
    printf("0");
    return 0;
}