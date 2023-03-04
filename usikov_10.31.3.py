from random import randint

def norma(a):
    s = 0
    for i in range(len(a)):
        for j in range(len(a[0])):
            s += a[i][j] * a[j][i]
    return s ** 0.5

def prM(a):
    for row in a:
        for i in row:
            print('%3d' % i, end='')
        print()

def create(m,n):
    a = [[randint(-10, 10) for i in range(n)] for i in range(m)]
    return a

a = create(4,4)
prM(a)
print('norma = %6.2f' % norma(a))
            
