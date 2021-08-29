#include<stdio.h>
long long sum(int*, int);
int main(void) {
    int n, i;
    int* a;
    a = malloc(sizeof(3000000)); //포인터로 받을때 크기를 정해준다.
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    long long t = sum(a, n);
    printf("%d", t);
    return 0;
}

long long sum(int* a, int n) {
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        ans += a[i];
    }
    return ans;
}