#include <stdio.h>

#define MAX 100

int main(void)
{
	int T, i;
	char word[MAX], c;
	char *p = word;

	scanf("%d", &T);
	getchar();

	for (i = 0; i < T; i++) {
		while ((c = getchar()) != '\n') {
			*p++ = c;
		}
		p--;
		printf("%c%c\n", *word, *p);
	}
	return 0;
}
