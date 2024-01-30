N,M,K=map(int,input().split())
arr=list(map(int,input().split()))
arr.sort()
count=0
ans=0

for _ in range(M):
    if count<K:
        ans+=arr[-1]
        count+=1
    else:
        ans+=arr[-2]
        count=0
    
print(ans)

