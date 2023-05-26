#include <stdio.h>

int main(void){
    int day, night, height, result = 0;
    
    scanf("%d %d %d", &day, &night, &height);
    
    result = (height - night - 1)/(day - night) + 1;
    printf("%d\n", result);
    
    return 0;
}