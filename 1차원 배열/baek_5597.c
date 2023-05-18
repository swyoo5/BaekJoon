#include <stdio.h>

int main(void)
{
	int assignment[30] = {0}, i, attend_num;

	for (i = 0; i < 28; i++) {
		scanf("%d", &attend_num);
		assignment[attend_num - 1] = 1;
	} 	

	printf("\n");
	for (i = 0; i < 30; i++) {
		if (assignment[i] == 0) {
			printf("%d\n", i+1);
		}
	}	

	return 0;
}
