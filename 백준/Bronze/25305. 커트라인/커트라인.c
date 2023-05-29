#include <stdio.h>

#define MAX 1000

int main(void){
    int N, k, score[MAX];
    
    scanf("%d %d", &N, &k);
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &score[i]);
    }
    
    for (int i = 0; i < N - 1; i++) {
        for (int j = i; j < N; j++) {
            if (score[i] > score[j]) {
                int temp = score[i];
                score[i] = score[j];
                score[j] = temp;
            }        
        }
    }
    
    printf("%d\n", score[N - k]);
    return 0;
}