def matrix(n):
    a = [[0]*n for i in range(n)]
    for i in range(n):
        a[i][i] = 1
    return a

def matrix2(n):
    a = [[0]*n for i in range(n)]
    for i in range(n):
        for j in range(n):
            if i == j:
                a[i][j] = 1
    return a
def prM(a):
    for row in a:
        for i in row:
            print('%3d' % i, end='')
        print()
            
a = matrix(4)
b = matrix2(5)
prM(b)
