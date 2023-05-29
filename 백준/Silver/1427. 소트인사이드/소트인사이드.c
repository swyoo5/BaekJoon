#include <stdio.h>

int main(void) {
    int n, index = 0;
    int num[10] = {0};
    
    scanf("%d", &n);
    while (n > 0) {
        num[index++] = n % 10;
        n /= 10;
    }
    
    for (int i = 0; i < index - 1; i++) {
        for (int j = i; j < index; j++) {
            if (num[i] < num[j]) {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    
    for (int i = 0; i < index; i++) {
        printf("%d", num[i]);
    }
    printf("\n");
    return 0;
}