a,b,c,d=sorted(map(int,input().split()))
#a=[int(i) for i in input().split()]
print(" YNEOS"[a+d==c+b or d==a+b+c::2])