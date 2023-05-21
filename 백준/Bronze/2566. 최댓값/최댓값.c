#include <stdio.h>

int main(void)
{
    int element;
    int max = 0, result_row = 0, result_col = 0;
    
    for(int i = 0; i < 9; i++){
        for(int j = 0 ; j < 9; j++){
            scanf("%d", &element); 
            if(max < element){
                max = element;
                result_row = i;
                result_col = j;
            }
        }
    }
  
    printf("%d\n", max);
    printf("%d %d\n", result_row + 1, result_col + 1);
    
    return 0;
}