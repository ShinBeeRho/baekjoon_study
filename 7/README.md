### 7-5.c
```
for(i=0;i<strlen(S);i++)
```
이와 같이 strlen함수를 for문에 넣어서 쓰면 반복될때마다 작동하여 시간초과가 될 수도 있다.
<br><br>
따.라.서
```
11  int len = strlen(S); 
13  for (i = 0; i < len; i++) {
```
strlen함수는 for문 밖에서 써야한다.


### 7-6.c
```
fgets(word, SIZE, stdin);
```
fgets(배열이름, 배열크기, stdin);
띄워쓰기가 포함된 문장단위의 문자열을 입력받을때 사용
```
char* ptr = strtok(word, " ");
while (ptr != NULL ) {
	ptr = strtok(NULL, " ");
	count++;
}
```
띄워쓰기 단위로 문자열을 끊어준다.
