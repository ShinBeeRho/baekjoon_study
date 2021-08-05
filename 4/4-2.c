#include<stdio.h>
int main(void) {
	int A, B;
	while (scanf("%d %d", &A, &B)!=EOF) { //EOF=End-Of-File로 파일의 끝을 표현
		printf("%d\n", A + B);
	}
	return 0;
}