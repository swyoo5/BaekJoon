#include <stdio.h>

#define MAX 100

int main(void)
{
	char word[MAX], c;
	char *p = word;

	while ((c = getchar()) != '\n') {
		*p++ = c;		
	}
	p--;

	printf("%ld\n", p - word + 1);	

	return 0;
}
