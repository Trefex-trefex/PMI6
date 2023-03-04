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
    b = a
    n = len(b[0])
    i = 0
    while i<len(b):
        if 0 in b[i]:
            b.insert(i, [1]*n)
            b.insert(i+2, [1]*n)
            i += 2
        i += 1
    return b

a=[[0,1,4,3,6],
   [1,2,3,5,3],
   [4,5,3,6,4],
   [5,6,0,0,2]]

m = int(input('кол-во строк: '))
n = int(input('кол-во столбцов: '))

c = create(m,n)
prM(c)
print()
b = matrix(c)
prM(b)


            
        
