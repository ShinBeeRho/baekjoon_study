N=int(input())
m=[500,100,50,10]
sum=0
for i in m:
    count=N//i
    N=N%i
    sum=sum+count

print(sum)
