x,y=map(int,input().split())

ans=0
for i in range(1,7):
    for j in range(1,7):
        judge=False
        if i+j>=x:
            judge=True
        elif abs(i-j)>=y:
            judge=True
        if judge==True:
            ans+=1

print(ans/36)
