#include <stdio.h>

int main(void){
    int A, B, C;
    
    scanf("%d %d %d", &A, &B, &C);
    
    if (A == 60 && B == 60 && C == 60) {
        printf("Equilateral\n");
    } else if (A + B + C == 180 && ((A == B) || (A == C) || (B == C))) {
        printf("Isosceles\n");
    } else if (A + B + C == 180 && ((A != B) && (A != C) && (B != C))) {
        printf("Scalene\n");
    } else if (A + B + C != 180){
        printf("Error\n");
    }
    return 0;
}