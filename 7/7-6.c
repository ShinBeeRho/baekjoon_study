#include<stdio.h>
#include<string.h>
#define SIZE 1000000
char word[SIZE];
int main(void) {
	int count = 0;
	fgets(word, SIZE, stdin);
	int len = strlen(word);
	word[len - 1] = '\0';
	
	char* ptr = strtok(word, " ");
	while (ptr != NULL ) {
		ptr = strtok(NULL, " ");
		count++;
	}

	printf("%d", count);
	return 0;
}