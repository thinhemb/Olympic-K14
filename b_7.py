n = int(input())
for i in range(1, n):
    s = n - i
    k = s * " "
 
    print(k, end='')
    print((2 * i - 1) * '*')
for i in range(n, 0, -1):
    s = n - i
    k = s * ' '
    print(k, end='')
    print((2 * i - 1) * '*')
