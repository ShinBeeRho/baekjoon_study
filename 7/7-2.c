#include<stdio.h>
char a[100];
int main(void) {
	int N, i;
	int sum = 0;
	scanf("%d", &N);
	scanf("%s", a);
	for (i = 0; i < N; i++) {
		sum += a[i] - '0';
	}
	printf("%d\n", sum);
	return 0;
}