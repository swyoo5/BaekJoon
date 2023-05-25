#include <stdio.h>

int main(void){
    int T, coin;
    
    scanf("%d", &T);
    for (int i = 0; i < T; i++){
        scanf("%d", &coin);
        printf("%d ", coin / 25);
        coin %= 25;
        printf("%d ", coin / 10);
        coin %= 10;
        printf("%d ", coin / 5);
        coin %= 5;
        printf("%d\n", coin);
    }
    
    return 0;
}