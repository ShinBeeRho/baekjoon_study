#include<stdio.h>
#include<string.h> //strlen을 사용하기위해 선언 
char a[100];  //OX배열
int score[100]; //점수배열
int main(void) {
	int n, i, j, point = 1;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s", &a); //문자열 입력받기
		for (j = 0; j < strlen(a); j++) {
			if (a[j] == 'O') {
				score[i] += point;
				point++; //연속정답일경우 다음 문제 추가점수
			}
			else if(a[j]=='X') point = 1; //연속이 아니면 점수 초기화
		}
		point = 1;
	}

	for (i = 0; i < n; i++) 
		printf("%d\n", score[i]);

	return 0;
}