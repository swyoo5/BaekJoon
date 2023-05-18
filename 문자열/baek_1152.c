#include <stdio.h>

int main(void)
{
	int word = 0;
	char c;

	while ((c = getchar()) != '\n') {
		while (c == ' ');
		if (c == ' ') word++;
	}
	word++;
	
	printf("%d", word);
	return 0;
}
