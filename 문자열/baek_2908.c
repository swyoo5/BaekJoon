#include <stdio.h>

int main(void)
{
	int num1, num2, n1[3], n2[3];
	int temp = 0;

	scanf("%d %d", &num1, &num2);

	while (num1 != 0) {
		n1[temp] = num1 % 10;
		n2[temp] = num2 % 10;

		num1 /= 10;
		num2 /= 10;
		temp++;
	}
	
	num1 = n1[0] * 100 + n1[1] * 10 + n1[2];
	num2 = n2[0] * 100 + n2[1] * 10 + n2[2];

	printf("%d\n", num1 > num2 ? num1 : num2);
	return 0;
}
