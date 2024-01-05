#첫 줄에 테스트케이스의 개수 T가 주어진다. T는 최대 1,000,000이다. 다음 T줄에는 각각 두 정수 A와 B가 주어진다. A와 B는 1 이상, 1,000 이하이다.

import sys

T=int(input())
for i in range(T):
  A,B=map(int,sys.stdin.readline().split())
  print(A+B)
#반복문으로 여러줄을 입력받는 상황에서 input을 사용하면 시간초과가 발생할 수 있다. 따라서 'sys.stdin.readline()'을 사용하여 입력받아야 한다.
