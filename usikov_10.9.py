def prM(a):
    for row in a:
        for i in row:
            print('%4.1f' % i, end='')
        print()

def matrix(a):
    n = len(a)
    b = []
    c = [[0]*n for i in range(n)]
    for row in a:
        b.append(max(row))
    if 0 in b:
        print('Але! Какой 0!')
    else:
        for i in range(n):
            for j in range(n):
                c[i][j] = a[i][j] / b[i]
        prM(a)
        print()
        print(*b)
        print()
        prM(c)

a = [[0, -7, -4],
     [2, 0, 10],
     [1, 2, 0]]

matrix(a)
        
    
        
