#include<stdio.h>
int main(void) {
	int p[100];
	int A, B, T, i;
	scanf("%d", &T);
	for (i = 1; i <= T; i++) {
		scanf("%d %d", &A, &B);
		p[i] = A + B;
	}
	for (i = 1; i <= T; i++) 
		printf("%d\n", p[i]);
	return 0;
}