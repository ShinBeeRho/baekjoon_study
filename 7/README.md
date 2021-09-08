### 7-5.c
```
for(i=0;i<strlen(S);i++)
```
이와 같이 strlen함수를 for문에 넣어서 쓰면 반복될때마다 작동하여 시간초과가 될 수도 있다.
<br>
따.라.서
```
11  int len = strlen(S); 
13  for (i = 0; i < len; i++) {
```
strlen함수는 for문 밖에서 써야한다.