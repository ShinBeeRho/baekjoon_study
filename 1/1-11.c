#include<stdio.h>
int main(void) {
	int a, b;
	int x1, x2, x3, sum;
	scanf("%d %d", &a, &b);
	x1 = a * (b % 10);
	b = b / 10;
	x2 = a * (b % 10);
	b = b / 10;
	x3 = a * (b % 10);
	sum = x1 + (x2 * 10) + (x3 * 100);
	printf("%d\n%d\n%d\n%d\n", x1, x2, x3, sum);
	return 0;
}