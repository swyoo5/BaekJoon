#include <stdio.h>

#define MAX 100000

int main(void){
    int n, x, y, width, height, min_x = 100000, max_x = -100000, min_y = 100000, max_y = -100000;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) 
    { 
        scanf("%d %d", &x, &y);
        if (max_x < x) max_x = x;
        if (min_x > x) min_x = x;
        if (max_y < y) max_y = y;
        if (min_y > y) min_y = y;
    }    
    width = max_x - min_x;
    height = max_y - min_y;
    
    printf("%d\n", width * height);
    return 0;
}