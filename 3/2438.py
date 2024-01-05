#첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제

N=int(input())
for i in range(1,N+1):
  for j in range(i):
    print("*",end="")
  print("")

#print는 별도의 줄바꿈이 없어도 줄바꿈이 됨
