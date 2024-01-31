move = [
    [-1,-1],[-1,0],[-1,1],[0,1],[1,1],[1,0],[1,-1],[0,-1]
]

while 1:
    R,C=map(int,input().split())
    if R==0 and C==0:
        break
    
    board=[]
    for i in range(R):
        arr=list(input().strip())
        board.append(arr)
    #split : 문자열 입력 -> 문자열 통으로 배열에 들어감(Index error)
    #strip : 개행문자로 입력받아서 배열에 들어감
    
  
    def bomb(a,b):
        ans=0
        for i in range(8):
            x=a+move[i][0]
            y=b+move[i][1]
            if x<0 or y<0 or x>=R or y>=C:
                continue
            if board[x][y]=="*":
                ans+=1
        print(ans,end="")
        
    for i in range(R):
        for j in range(C):
            if board[i][j] == ".":
                bomb(i,j)
            elif board[i][j] == "*":
                print("*",end="")
        
        print()
                
                