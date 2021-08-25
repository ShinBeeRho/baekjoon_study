#include<stdio.h>
int d(int k); //셀프넘버 판별하는 함수
int s[10000];
int main(void) {
	int i, n;
	for (i = 1; i <= 10000; i++) {
		n = i;
		while (n <= 10000) 
			n = d(n);
	}
	for (i = 1; i <= 10000; i++)
		if (s[i] == 0) printf("%d\n", i);

	return 0;
}

int d(int k) {
	int a = k;
	int t = k;
	while (t) { //k와 k의 각 자리수를 더한 d(k)만들기
		a += t % 10;
		t /= 10;
	}
	s[a] = 1; //만들어진 수는 생성자가 있으므로 셀프넘버가 아님
	return a; //만들어진 수 리턴
}