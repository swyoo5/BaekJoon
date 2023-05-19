#include <stdio.h>

#define MAX 100
int main(void)
{
	char word[MAX + 1], c;
	char *p = word;
	int count = 0;

	while ((c = getchar()) != '\n') {
		*p++ = c;
	}
	
	p = word;
	while (*p != '\0') {
		if (*p == 'c') {
			if (*(p + 1) == '=' || *(p + 1) == '-') {
				p += 2;
			} else {
				p++;
			}
		}else if (*p == 'd') {
			if (*(p + 1) == 'z' && *(p + 2) == '=') {
				p += 3;
			} else {
				p++;
			}
		}else if (*p == 'l') {
			if (*(p + 1) == 'j') {
				p += 2;
			} else {
				p++;
			}
		}else if (*p == 'n') {
			if (*(p + 1) == 'j') {
				p += 2;
			} else {
				p++;
			}
		}else if (*p == 's') {
			if (*(p + 1) == '=') {
				p += 2;
			} else {
				p++;
			}
		}else if (*p == 'z') {
			if (*(p + 1) == '=') {
				p += 2;
			} else {
				p++;
			}
		}else {
			p++;
		}
		count++;
	}
	printf("%d\n", count); 
	return 0;
}
