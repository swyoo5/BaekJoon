#include <stdio.h>

#define MAX 100

int main(void)
{
	int N, num_array[MAX], element, num, i, result;

	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf("%d ", &element);
		num_array[i] = element; 
	}

	scanf("%d", &num);

	for (i = 0; i < N; i++) {
		if (num_array[i] == num) {
			result++;
		}
	}
	
	printf("%d\n", result);
	return 0;
}
