#pragma warning ( disable:4996)
#include <stdio.h>

int main(void)
{
	int a = 1,b = 1;
	while (1)
	{
		scanf("%d %d", &a, &b);
		if (0 == a || b == 10)
			break;
		else
			printf("%d\n", a + b);
	}
	
	return 0;
}