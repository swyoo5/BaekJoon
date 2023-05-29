#include <stdio.h>

int main(void) {
    int n, result = 666, index = 0;
    
    scanf("%d", &n);
    while (1) {
        int temp = result;
        while (temp != 0) {
            if (temp % 1000 == 666) {
                index++;
                break;
            }
            temp /= 10;
        }
        
        if (n == index) {
            printf("%d\n", result);
            return 0;
        }
        result++;
    }
}