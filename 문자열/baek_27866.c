#include <stdio.h>

#define MAX 100

int main(void)
{
	char word[MAX], c;
	char *p = word;
	int index;

	while ((c = getchar()) != '\n') {
		*p++ = c;
	}
	p = word;
	
	scanf("%d", &index);
	printf("%c\n", *(p + index - 1));	

	return 0;
}
