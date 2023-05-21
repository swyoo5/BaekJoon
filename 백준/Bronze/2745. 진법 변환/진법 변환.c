#include <stdio.h>
#include <math.h>
#include <string.h>

#define MAX 100

int main(void){
    char num[MAX];
    int B, result = 0;
    
    scanf("%s %d", num, &B);
    for (int i = strlen(num) - 1; i >= 0; i--){
        if (num[i] >= 'A' && num[i] <= 'Z'){
            result += (num[i] - 'A' + 10) * pow(B, strlen(num) - i - 1);    
        } else {
            result += (num[i] - '0') * pow(B, strlen(num) - i - 1);
        }
    }
    
    printf("%d\n", result);
    return 0;
}