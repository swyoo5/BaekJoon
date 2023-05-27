#include <stdio.h>

int main(void){
    int N, num, result = 0;

    scanf("%d", &N);
    for (int i = 0; i < N; i++){
        int factor = 0;
        
        scanf("%d", &num);
        
        for (int j = 1; j <= num; j++){
            if (num % j == 0) {
                factor++;
            }
        }
        
        if (factor == 2){
            result++;
        }
    }
    printf("%d\n", result);
    return 0;
}