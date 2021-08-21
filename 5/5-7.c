#include<stdio.h>
int score[1000];
double p[1000];
int main(void) {
	int C, N;
	int i, j;
	double sum = 0, count = 0;
	scanf("%d", &C);
	for (i = 0; i < C; i++) {
		scanf("%d", &N);
		for (j = 0; j < N; j++) {
			scanf("%d", &score[j]);
			sum += score[j];
		}
		sum = sum / (double)N;
		for (j = 0; j < N; j++) 
			if (sum < score[j]) count++;
		p[i] = count / (double)N * 100;
		count = 0;
		sum = 0;
	}
	for (i = 0; i < C; i++) {
		printf("%.3f%\n", p[i]);
	}
	return 0;
}