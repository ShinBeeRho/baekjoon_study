#include<stdio.h>
int main(void) {
	int N, n;
	int sum, newnumber, count = 0;
    //sum=각 자릿수의 합, newnumber=문제조건에 따라 만든 새로운 수
	scanf("%d", &N);
	n = N;
	while (1) {
		count++;
		sum = n % 10 + n / 10;
		newnumber = ((n % 10) * 10) + (sum % 10);
		if (newnumber == N) break;
		n = newnumber;
	}
	printf("%d", count);
	return 0;
}
