from random import randint

def prM(a):
    for row in a:
        for i in row:
            print('%3d' % i, end='')
        print()

def create(m,n):
    a = [[randint(0, 5) for i in range(n)] for i in range(m)]
    return a

def poisk(a):
    i = 0
    while i<len(a)-1 and a[i]==a[i+1]:
        i+=1
    return i==len(a)-1

#m = int(input('кол-во строк: '))
#n = int(input('кол-во столбцов: '))

a = [[0,0,0,0],
     [0,0,0,0],
     [0,0,0,1]]
prM(a)
i = 0
while i < len(a) and poisk(a[i]):
    i += 1
if i == len(a):
    b = []
    for i in range(len(a)):
        b.append(a[i][0])
    if poisk(b):
        print('матрица просто сказка')
    else:
        print('в матрице неодинаковые элементы')
else:
    print('в матрице неодинаковые элементы')


    
