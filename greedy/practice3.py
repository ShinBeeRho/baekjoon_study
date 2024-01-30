N,M=map(int,input().split())
ans=0
for i in range(N):
    card=list(map(int,input().split()))
    ans=max(min(card),ans)
    
print(ans)