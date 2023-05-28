#include <stdio.h>

#define MAX 100

int main(void)
{
    int N, M, card[MAX], max = 0;
    
    scanf("%d %d", &N, &M);
    
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &card[i]);
    }
    
    for (int i = 0; i < N - 2; i++){
        int sum = 0;
        for (int j = i + 1; j < N - 1;j++){
            for (int k = j + 1; k < N; k++){
                sum = card[i] + card[j] + card[k];
                if (sum > max && sum <= M) {
                    max = sum;
                }
            }
        }
    }
    printf("%d\n", max);
    return 0;
}