#include <stdio.h>

int main(void){
    int n1 = 1, n2 = 1;
    
    while (1){
        scanf("%d %d", &n1, &n2);
        if (n1 == 0 && n2 == 0){
            break;
        }
        if (n1 % n2 == 0){
            printf("multiple\n");
        } else if (n2 % n1 == 0){
            printf("factor\n");
        } else {
            printf("neither\n");
        }
    }
    return 0;
}