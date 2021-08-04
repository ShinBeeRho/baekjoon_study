#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", a * (b % 10));
	printf("%d\n", a * ((b / 10) % 10));
	printf("%d\n", a * ((b / 10) / 10));
	printf("%d", a * b);

	return 0;
}