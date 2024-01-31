INF = 2**31-1
N=int(input())
arr=[list(map(int,input().split())) for i in range(N)]
arr.sort(key=lambda x:x[1])
res=[[arr[0][0],arr[0][1]]]

for i in range(1,N):
    if arr[i][0] >= res[-1][1] :
        res.append(arr[i])

print(len(res))
