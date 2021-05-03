#bai2
a=input()
b=input()
cnt=0
for i in range(len(b)):
    temp=b[i:i+len(a)]
    if temp==a:
        cnt+=1
print(cnt)
