#include<stdio.h>
int han(int);
int count = 0;
int main(void) {
	int N, i;
	scanf("%d", &N);
	for (i = 1; i <= N; i++) han(i);
	printf("%d\n", count);
	return 0;
}

int han(int n) {	
	if (n < 100) count++;
	else {
		int one = n % 10;
		int ten = (n % 100) / 10;
		int hun = n / 100;
		if ((hun - ten) == (ten - one)) count++;
	}
}