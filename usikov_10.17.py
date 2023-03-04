from random import randint

def prM(a):
    for row in a:
        for i in row:
            print('%3d' % i, end='')
        print()

def matrix(a):
    j1 = int(input('j1 = '))
    j2 = int(input('j2 = '))

    for i in range(len(a)):
        a[i][j1-1], a[i][j2-1] = a[i][j2-1],a[i][j1-1]
    return a

def create(m,n):
    a = [[randint(1, 5) for i in range(n)] for i in range(m)]
    return a

m = int(input('кол-во строк: '))
n = int(input('кол-во столбцов: '))
a = create(m,n)
prM(a)
a = matrix(a)
prM(a)
    
