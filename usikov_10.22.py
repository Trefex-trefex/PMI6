from random import randint

def prM(a):
    for row in a:
        for i in row:
            print('%3d' % i, end='')
        print()

def create(m,n):
    a = [[randint(0, 5) for i in range(n)] for i in range(m)]
    return a

def matrix(a):
    k = int(input('k = '))
    b = a
    b.pop(k-1)
    return b

m = int(input('кол-во строк: '))
n = int(input('кол-во столбцов: '))

a = create(m,n)
prM(a)
b = matrix(a)
prM(b)
