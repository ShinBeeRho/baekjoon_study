#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
	int hour, min;
	scanf("%d %d", &hour, &min);
	min -= 45;
	if (min < 0)
	{
		min += 60;
		hour = (hour + 24 - 1) % 24;
	}
	printf("%d %d", hour, min);
	return 0;
}