#include <stdio.h>

int main(void) {
    int n, min = 2000, temp;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n / 5 + 1; i++) {
        for (int j = 0; j < n / 3 + 1; j++) {
            if (5 * i + 3 * j == n) {
                temp = i + j;
                if (min > temp) {
                    min = temp;
                }
            }
        }
    }
    printf("%d\n", min == 2000 ? -1 : min);
    return 0;
}