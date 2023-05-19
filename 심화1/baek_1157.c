#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 1000000

int main(void)
{
	char c, word[MAX];
	char *p = word;
	int alphabet[26] = {0}, i, max, index, duplicate = 0;

	while ((c = toupper(getchar())) != '\n') {
		*p++ = c;	
	}

	for (i = 0; i < strlen(word); i++) {
		alphabet[word[i] - 'A']++; 
	}

	for (i = 0; i < 26; i++) {
		if (alphabet[i] > max) {
			max = alphabet[i];
			index = i;
		}	
	}

	for (i = 0; i < 26; i++) {
		if (alphabet[i] == max) {
			duplicate += 1;
		}
	}

	printf("%c\n", duplicate > 1 ? '?' : index + 'A');
	return 0;
}
