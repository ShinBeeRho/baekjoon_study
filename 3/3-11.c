#include<stdio.h>
int main(void) {
	int N, X, i;
	int A[10000]; //배열의 크기를 충분히 크게 잡아줘야함(오류 원인)
	scanf("%d %d", &N, &X);
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
		if (A[i] < X) printf("%d ", A[i]);
	}
	return 0;
}