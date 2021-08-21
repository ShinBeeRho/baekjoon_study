#include<stdio.h>
int p[10];
int main(void) {
	int A, B, C, R;
	int i;
	scanf("%d %d %d", &A, &B, &C);
	int t = A * B * C;
	while (t) {
		R = t % 10;
		p[R]++;
		t = t / 10;
	}
	for (i = 0; i <= 9; i++) {
		printf("%d\n", p[i]);
	}
	return 0;
}