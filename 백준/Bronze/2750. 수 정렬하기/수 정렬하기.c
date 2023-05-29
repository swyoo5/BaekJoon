#include <stdio.h>

#define MAX 1000

int main(void) {
    int n, num[MAX] = {0};
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (num[i] > num[j]) {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
        
    for (int i = 0; i < n; i++) {
        printf("%d\n", num[i]); 
    }
    return 0;
}