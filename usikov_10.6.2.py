from random import randint
def prM(a):
    for row in a:
        for i in row:
            print('%3d' % i, end='')
        print()

def matrix(a):
    n = len(a)//2
    for i in range(len(a)):
        for j in range(len(a)):
            if i < n and j < n:
                a[i][j],a[i+n][j+n] = a[i+n][j+n],a[i][j]
            elif i < n and j >= n:
                a[i][j],a[i+n][j-n] = a[i+n][j-n],a[i][j]
    return a

a = [[1, 1, 2, 2],
     [1, 1, 2, 2],
     [4, 4, 3, 3],
     [4, 4, 3, 3]]
c = [[randint(1,10)for i in range(4)] for j in range(4)]
prM(c)
print()
b = matrix(c)
prM(b)

