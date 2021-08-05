#pragma warning(disable:4996)
#include<stdio.h>
int main(void) {
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	int x1, x2, x3, x4;
	x1 = (A + B) % C;
	x2 = ((A % C) + (B % C)) % C;
	x3 = (A * B) % C;
	x4 = ((A % C) * (B % C)) % C;
	printf("%d\n%d\n%d\n%d\n", x1, x2, x3, x4);

	return 0;
}