N,M=map(int,input().split())
basket=[0]*N
for i in range(N):
    basket[i]=i+1
#basket = [i for i in range(1,N+1)] 로 선언과 동시에 숫자를 넣을 수 있음.
for x in range(M):
    i,j = map(int,input().split())
    t=basket[i-1]
    basket[i-1]=basket[j-1]
    basket[j-1]=t
    
for x in range(N):
    print(basket[x],end=' ')