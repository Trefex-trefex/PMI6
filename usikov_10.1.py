def matrix(n):
    b = [0]*n
    k = n*n + 1
    for i in range(n):
        b[i] = [0]*n
        for j in range(n):
            b[i][j]= k - 1
            k = k - 1
    return b

def matrix2(n):
    a = [[0]*n for i in range(n)]
    k = 0
    for j in range(n):
        for i in range(n):
            a[i][j] = k + 1
            k += 1
    return a
        
    
def prM(a):
    for row in a:
        for i in row:
            print('%3d' % i, end='')
        print()
b = matrix(5)
a = matrix2(4)
prM(a)


        


