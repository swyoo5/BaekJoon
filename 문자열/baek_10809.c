#include <stdio.h>

#define MAX 100

int main(void)
{
	char word[MAX];
	char *p = word;
	int alphabet[26] = {[0 ... 25] = -1}, index = 0;

	scanf("%s", word);
	
	while (*p != '\0') {
		if (alphabet[*p - 'a'] == -1) {
			alphabet[*p - 'a'] = index;
		}
		p++;
		index++;
	}
	
	for (int i = 0; i < 26; i++) {
		printf("%d ", alphabet[i]);
	}
	printf("\n");	
	return 0;
}
