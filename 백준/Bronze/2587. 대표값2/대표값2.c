#include <stdio.h>

int main(void) {
    int num[5], sum = 0;
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
        sum += num[i];
    }
    
    printf("%d\n", sum / 5);
    
    for (int i = 0; i < 4; i++) {
        for (int j = i; j < 5; j++) {
            if (num[i] > num[j]) {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    printf("%d\n", num[2]);
    return 0;
}