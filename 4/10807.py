#총 N개의 정수가 주어졌을 때, 정수 v가 몇 개인지 구하는 프로그램을 작성하시오.

N=int(input())
list1=list(map(int,input().split()))
v=int(input())

print(list1.count(v))

#list 입력받기, list.count()함수를 사용하여 v의 개수 출력
