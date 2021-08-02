#pragma warning(disable:4996)
#include<stdio.h>
int main(void) {
	int a, b;
	int plus, subtract, multiply, divide, remain;
	scanf("%d %d", &a, &b);
	plus = a + b;
	subtract = a - b;
	multiply = a * b;
	divide = a / b;
	remain = a % b;
	printf("%d\n", plus);
	printf("%d\n", subtract);
	printf("%d\n", multiply);
	printf("%d\n", divide);
	printf("%d\n", remain);
	return 0;
}