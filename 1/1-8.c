#include<stdio.h>
int main(void) {
	int a, b;
	double t;
	scanf("%d %d", &a, &b);
	t = (double)a / b;
	printf("%.9f", t);
	return 0;
}