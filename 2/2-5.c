#include<stdio.h>
int main(void) {
	int H, M;
	scanf("%d %d", &H, &M);
	if (M >= 45 && M <= 59) M -= 45;
	else if (H > 0 && M < 45) {
		M += 15;
		H -= 1;
	}
	else if (H == 0 && M < 45) {
		H = 23;
		M += 15;
	}
	printf("%d %d", H, M);
	return 0;
}