from random import randint

def mult(x, a):
    c = [0 for i in range(len(a))]
    for j in range(len(a)):
        for i in range(len(a)):
            c[j] += x[i] * a[i][j]
    return c

def max_min(a):
    mx = max(a)
    mn = min(a)
    k1 = k2 = -1
    for i in range(len(a)):
        if a[i] == mn:
            k1 = i
        if a[i] == mx:
            k2 = i
    return k2,k1

def prM(a):
    for row in a:
        for i in row:
            print('%3d' % i, end='')
        print()

def create(m,n):
    a = [[randint(-10, 10) for i in range(n)] for i in range(m)]
    return a


x = [randint(-10, 10) for i in range(5)]
a = create(5,5)
c = mult(x,a)
print(*x)
print()
prM(a)
print()
print(*c)
print()
print('номер макс = %d, номер мин = %d' % max_min(c))
