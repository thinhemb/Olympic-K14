a=[int(i) for i in input().split()]
b=[int(i) for i in input().split()]
print(sum(a[i]*b[i] for i in range(len(a))))
