// 케이스별로 출력하는 프로그래밍
#include<stdio.h>
#include<string.h>
char S[20];
int main(void) {
	int T, R;
	int i, j, k;
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%d", &R);
		scanf("%s", S);
		for (j = 0; j < strlen(S); j++) {
			for (k = 0; k < R; k++) {
				printf("%c", S[j]);
			}
		}
		printf("\n");
	}
}

/*모든 케이스를 한꺼번에 입력받아 출력하는 프로그래밍
#include<stdio.h>
#include<string.h>
char S[1000][20];
int main(void) {
	int T, R[1000];
	int i, j, k;
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%d", &R[i]);
		scanf("%s", S[i]);
		
	}
	for (i = 0; i < T; i++) {
		for (j = 0; j < strlen(S[i]); j++) {
			for (k = 0; k < R[i]; k++) {
				printf("%c", S[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}
*/