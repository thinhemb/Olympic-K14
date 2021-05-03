#%%
a = list(map(int, ' '.join(input()).split()))
s=0
if sum(a)%2==0:
    for i in a:
        if(s==sum(a)/2+1 and i==0):
            continue
        else:
            print(i,end='')
        s+=i
        if s==sum(a)/2:
            s+=1
            print('',end=' ')
else:
    print('No')