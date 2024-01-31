N=int(input())
arr=list(map(int,input().split()))

arr.sort()
timesum=0
ans=0

for i in arr:
    timesum+=i
    ans+=timesum
    
print(ans)