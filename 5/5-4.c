#include<stdio.h>
int p[42];
int main(void) {
	int n, i;
	int count = 0;
	for (i = 0; i < 10; i++) {
		scanf("%d", &n);
		p[n % 42]++;
	}
	for (i = 0; i < 42; i++) {
		if (p[i] != 0) count++;
	}
	printf("%d\n", count);
	return 0;

}