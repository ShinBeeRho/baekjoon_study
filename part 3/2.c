#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
	int n, a, b;
	scanf("%d", & n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	return 0;
}