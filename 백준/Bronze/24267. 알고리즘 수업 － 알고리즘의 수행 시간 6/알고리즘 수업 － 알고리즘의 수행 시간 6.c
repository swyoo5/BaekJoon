#include <stdio.h>

int main(void)
{
    int n;
    
    scanf("%d", &n);
    printf("%ld\n3", (long) n * (n - 1) * (n - 2) / 6);
    
    return 0;
}