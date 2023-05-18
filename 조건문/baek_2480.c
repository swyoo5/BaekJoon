#include <stdio.h>

int main(void)
{
	int n1, n2, n3, money;

	scanf("%d %d %d", &n1, &n2, &n3);

	if (n1 == n2 && n2 == n3) {
		money = 10000 + n1 * 1000;			
	}else if (n1 == n2 || n1 == n3) {
		money = 1000 + n1 * 100;
	}else if (n2 == n3) {
		money = 1000 + n2 * 100;
	}else if (n1 > n2 && n1 > n3) {
		money = n1 * 100;
	}else if (n2 > n1 && n2 > n3) {
		money = n2 * 100;
	}else if (n3 > n1 && n3 > n2) {
		money = n3 * 100;
	}
	
	printf("%d\n", money);

	return 0;
}
