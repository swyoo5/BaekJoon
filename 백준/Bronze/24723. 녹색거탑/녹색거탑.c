#include <stdio.h>
#include <math.h>

int main(void) {
    int N, result;
    
    scanf("%d", &N);
    result = pow(2, N);
    printf("%d\n", result);
    
    return 0;
}