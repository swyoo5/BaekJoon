#include <stdio.h>

int main(void) {
    int side[3];
    
    scanf("%d %d %d", &side[0], &side[1], &side[2]);
    
    if (side[0] > side[1] && side[0] > side[2] && side[0] >= side[1] + side[2])
    {
        side[0] = side[1] + side[2] - 1;
    } 
    else if (side[1] > side[0] && side[1] > side[2] && side[1] >= side[0] + side[2])
    {
        side[1] = side[0] + side[2] - 1;
    }
    else if (side[2] > side[0] && side[2] > side[1] && side[2] >= side[0] + side[1])
    {
        side[2] = side[0] + side[1] - 1;
    }
    printf("%d\n", side[0] + side[1] + side[2]);
    return 0;
}