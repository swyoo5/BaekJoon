#include <stdio.h>
#include <math.h>

int main(void){
    long N, result;
    
    scanf("%ld", &N);
    result = pow(pow(2, N) + 1 , 2);
    printf("%ld", result);
    
    return 0;
}