n=int(input())
a=[]
c={}
cmax=0
sv=''
for i in range(n):
    x,y=input().split()
    a.append((x,y))
    if a[i][1] in c:
        c[a[i][1]]+=1
    else:
        c[a[i][1]]=1
    if c[a[i][1]]>cmax:
        cmax=c[a[i][1]]
        sv=a[i][1]
for i in a:
    if i[1]==sv:
        print(i[0],end =" ")

