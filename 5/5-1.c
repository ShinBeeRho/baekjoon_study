#include<stdio.h>
int a[1000000];
int main(void) {
	int N, i;
	int max, min;
	scanf("%d", &N);
	scanf("%d", &a[0]);
	max = a[0];
	min = a[0];
	for (i = 1; i < N; i++) {
		scanf("%d", &a[i]);
		if (max <= a[i]) max = a[i];
		if (min >= a[i]) min = a[i];
	}
	printf("%d %d\n", min, max);
}