#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>
char* S;
char Alphabet[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int count[26];
int main(void) {
	S = malloc(sizeof(char)*1000000); //배열방수가 높아서 크기로 지정
	int i, j, max = 0, m = 0, s = 0;
	scanf("%s", S);
	int len = strlen(S); 
    //for문 속에 strlen함수를 쓰면 반복할 때마다 작동을 해서 시간초과가 남.
	for (i = 0; i < len; i++) {
		if (S[i] >= 'a' && S[i] <= 'z') {
			count[S[i] - 97]++;
		}
		else if (S[i] >= 'A' && S[i] <= 'Z') {
			count[S[i] - 65]++;
		}
	}
	for (i = 0; i < 26; i++) {
		if (max < count[i]) {
			max = count[i];
			m = i;
			s = 0;
		}
		else if (max == count[i]) {
			s = 1;
		}
	}
	if (s == 0) printf("%c\n", Alphabet[m]);
	else if (s == 1) printf("?\n");
	return 0;
}