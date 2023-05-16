#include <stdio.h>

int main(void)
{
	int hour, minute, cook_time;

	scanf("%d %d", &hour, &minute);
	scanf("%d", &cook_time);

	minute += cook_time;

	if (minute >= 60) {
		hour += minute / 60;
		minute %= 60;
		if (hour >= 24) {
			hour -= 24;
		}
	}
	printf("%d %d\n", hour, minute);
	return 0;
}
