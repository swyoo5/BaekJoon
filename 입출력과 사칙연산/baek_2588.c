#include <stdio.h>

int main(void)
{
	int n1, n2, temp, n2_one, n2_ten, n2_hundred;

	scanf("%d", &n1);
	scanf("%d", &n2);

	temp = n2;

	n2_one = temp % 10;
	temp /= 10;
	
	n2_ten = temp % 10;
	temp /= 10;
	
	n2_hundred = temp % 10;

	printf("%d\n", n1 * n2_one);
	printf("%d\n", n1 * n2_ten);
	printf("%d\n", n1 * n2_hundred);
	printf("%d\n", n1 * n2);

	return 0;
}
