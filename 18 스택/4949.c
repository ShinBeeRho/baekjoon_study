#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack {
	char* contents;
	int top;
};
typedef struct stack Stack;

Stack* create();
void push(Stack*, char);
char pop(Stack*);


int main()
{
	char buffer[100];

	while (1) {
		Stack* s = create();
		int n = 0;
		fgets(buffer,102, stdin);
		if (buffer[n] == '.')
			break;
		for (; n < strlen(buffer); n++) {
			if (buffer[n] == '(' || buffer[n] == '[')
				push(s, buffer[n]);

			else if (buffer[n] == ')') {
				char c = pop(s);
				if (c != '(') {  // () ¦�� �ȸ����Ƿ� no ��� �� break
					printf("no\n");
					break;
				}
			}
			else if (buffer[n] == ']') {
				char c = pop(s);
				if (c != '[') {  // () ¦�� �ȸ����Ƿ� no ��� �� break
					printf("no\n");
					break;
				}
			}
		}

		// ���� üũ�� ���� �� , 
		
		if (s->top == -1 && n == strlen(buffer))
			printf("yes\n");
		else if (s->top != -1 && n == strlen(buffer) )
			printf("no\n");
	}

}

Stack* create() {
	Stack* s = malloc(sizeof(Stack));
	s->contents = (char*)malloc(sizeof(char)*100); 

	s->top = -1;
	return s;
}

void push(Stack* s, char c) {
	s->top++;
	s->contents[s->top] = c;
}
char pop(Stack* s) {
	s->top--;
	return s->contents[s->top + 1];
}