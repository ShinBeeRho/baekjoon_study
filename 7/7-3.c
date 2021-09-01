#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>
char S[100];
int p[26];
int main(void) {
	int i, j;
	scanf("%s", S);
	memset(p, -1, sizeof(p));
	for (i = 0; i < 26; i++) {
		for (j = 0; j < strlen(S); j++) {
			if ((char)(i + 97) == S[j]) {
				p[i] = j;
				break;
			}
		}
	}
	for (i = 0; i < 26; i++)
		printf("%d ", p[i]);
	return 0;
}