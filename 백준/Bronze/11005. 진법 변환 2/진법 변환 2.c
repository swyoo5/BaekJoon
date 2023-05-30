#include <stdio.h>

#define MAX 100000

int main(void) {
    int N, base, index = 0;
    char converted_num[MAX];
        
    scanf("%d %d", &N, &base);
    while (N) {
        char digit;
        
        if (N % base >= 0 && N % base < 10) {
            digit = N % base + '0';
        } else {
            digit = N % base + 55;
        }
        
        converted_num[index++] = digit;
        N /= base;
    }
    
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", converted_num[i]);
    }
    printf("\n");
    return 0;
}