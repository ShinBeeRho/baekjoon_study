#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
	int a[10000] , b, n;
	scanf("%d %d", &n, &b);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < n; i++)
	{
		if (a[i] < b)
			printf("%d ", a[i]);
	}
	return 0;
}