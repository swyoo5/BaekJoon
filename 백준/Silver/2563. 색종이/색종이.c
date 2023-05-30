#include <stdio.h>

int main(void) {
    int coord[100][100] = {0};
    int n, x, y, result = 0;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        for (int j = x - 1; j < (x - 1) + 10; j++) {
            for (int k = y - 1; k < (y - 1) + 10; k++) {
                coord[j][k] = 1;
            }
        }
    }
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (coord[i][j] == 1) {
                result++;
            }
        }
    }
    printf("%d\n", result);
    return 0;
}