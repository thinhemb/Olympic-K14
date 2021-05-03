#%%
a=['0','1','2','3','4','5','6','7','8','9','-']
k=[]
for i in input():
    if i in a:
        k.append(i)
    else:
        k.append(' ')
k=''.join(k)
print(sum(int(i) for i in k.split()))
