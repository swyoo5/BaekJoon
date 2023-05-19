#include <stdio.h>
#include <string.h>

#define MAX 100

int main(void)
{
	char word[MAX + 1];
	char *p = word, c;
	int palindrome = 1;
		
	while ((c = getchar()) != '\n') {
		*p++ = c;
	}	

	for (int i = 0; i <= strlen(word) / 2; i++) {
		if (word[i]  != word[strlen(word) - i - 1]) {
			palindrome = 0;
			printf("%d\n", palindrome);
			return 0;	
		}
	}
	printf("%d\n", palindrome);
	return 0;
}
