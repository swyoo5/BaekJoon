#include <stdio.h>
#include <string.h>

#define MAX 1000000

int main(void)
{
	char sentence[MAX];	
	int len, i, cnt = 0;

	scanf("%[^\n]", sentence);
	len = strlen(sentence);

	if (len == 1) {
		if (sentence[0] == ' ') {
			printf("0\n");
			return 0;
		}
	}
	
	for (int i = 1; i < len - 1; i++) {
		if (sentence[i] == ' ') {
			cnt++;
		}
	}
	
	printf("%d\n", cnt + 1);		
	return 0;
}
