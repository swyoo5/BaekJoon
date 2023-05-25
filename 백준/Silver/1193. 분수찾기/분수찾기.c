#include <stdio.h>

int main(void){
    int N, diff = 1, index = 0;
    
    scanf("%d", &N); // 3 -> 2/1, 5 -> 2/2
    while (1){
        if (N <= index + diff){ // index = 1, diff = 2, 3 <= 3,, index = 3, diff = 3, 5 <= 6
            if (diff % 2 == 0){
                printf("%d/%d\n", N - index, (diff + 1) - (N - index));
                return 0;
            } else {
                printf("%d/%d\n", (diff + 1) - (N - index), N - index);
                return 0;
            }
        }
        index += diff;
        diff++;
    }
    
    return 0;
}