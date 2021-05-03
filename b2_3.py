a = list(map(int,input().split()))
for i in set(a):
    print(i,a.count(i))