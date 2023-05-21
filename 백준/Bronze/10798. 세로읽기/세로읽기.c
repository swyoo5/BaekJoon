#include <stdio.h>

int main(void) {
    char word[5][15] = {0};
    char c;
    
    for (int i = 0; i < 5; i++) {
        scanf("%s", word[i]);
    }
    
    for (int j = 0; j < 15; j++) {
        for (int i = 0; i < 5; i++) {
            if (word[i][j] != '\0') {
                printf("%c", word[i][j]);
            }
        }
    }
    
    printf("\n");
    return 0;
}