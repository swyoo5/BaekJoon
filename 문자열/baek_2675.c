#include <stdio.h>

#define MAX 20

int main(void)
{
	int T, repeat_num, i, j;
	char word[MAX];
	char *p;

	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%d %s", &repeat_num, word);
		p = word;
		while (*p != '\0'){
			for (j = 0; j < repeat_num; j++) {
				printf("%c", *p);	
			}
			p++;
		}
		printf("\n");
	}

	return 0;
}
