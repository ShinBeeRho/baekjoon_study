#두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

import sys
while(1):
  try:
      
    A,B=map(int,sys.stdin.readline().split())
    print(A+B)
  except:
    break

#try except를 사용하여 입력이 없을경우 종료
