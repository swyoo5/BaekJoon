#include <stdio.h>

int main(void){
    int result_x, result_y;
    int x_arr[3], y_arr[3];
    for (int i = 0; i < 3; i++){
        scanf("%d %d", &x_arr[i], &y_arr[i]);
    }
    
    if (x_arr[0] == x_arr[1]) {
        result_x = x_arr[2];
    } else if (x_arr[0] == x_arr[2]) {
        result_x = x_arr[1];
    } else {
        result_x = x_arr[0];
    }
    
    if (y_arr[0] == y_arr[1]) {
        result_y = y_arr[2];
    } else if (y_arr[0] == y_arr[2]){
        result_y = y_arr[1];
    } else {
        result_y = y_arr[0];
    }
    
    printf("%d %d\n", result_x, result_y);
    return 0;
}