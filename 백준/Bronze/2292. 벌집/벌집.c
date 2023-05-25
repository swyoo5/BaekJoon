#include <stdio.h>

int main(void){
    int N, num = 1, result = 1;
    
    scanf("%d", &N);
    while (1){
        if (num + 6 * (result - 1) >= N){
            printf("%d\n", result);
            return 0;
        }
        num += 6 * (result - 1);
        result++;
    }
}