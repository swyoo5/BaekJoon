#include <stdio.h>

int main(void){
    int x, y, w, h, min;
    int dist[4];
    
    scanf("%d %d %d %d", &x, &y, &w, &h);
    
    dist[0] = x;
    dist[1] = y;
    dist[2] = w - x;
    dist[3] = h - y;
    
    min = dist[0];
    for (int i = 1; i < 4; i++){
        if (dist[i] < min){
            min = dist[i];
        }
    }
    printf("%d\n", min);
    return 0;
}