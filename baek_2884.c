#include <stdio.h>

int main(void)
{
	int minute, hour;

	scanf("%d %d", &hour, &minute);
	minute -= 45;

	if (minute < 0){
		minute += 60;
		hour -= 1;
		if (hour < 0){
			hour += 24;
		}	
	}
	printf("%d %d\n", hour, minute);
	
	return 0;
}
