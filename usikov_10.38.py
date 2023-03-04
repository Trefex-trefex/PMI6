'''
программа ищет седловой элемент(минимальный в строке и максимальный в столбце)
'''

from random import randint

def prM(a):
    '''
    Функция выводит матрицу на экран
    На каждый элемент отводится 3 позиции
    '''
    for row in a:
        for i in row:
            print('%3d' % i, end='')
        print()

def create(m,n):
    '''
    Функция создает матрицу m x n и возвращает ее
    '''
    a = [[randint(-10, 10) for i in range(n)] for i in range(m)]
    return a

def sedlov(a):
    '''
    Функция находит индексы первой попавшейся седловой точки
    Возврат: кортеж индексов строки и столбца
    Если такого элемента нет, то вернется кортеж (-1,-1)
    '''
    mn = []
    for i in range(len(a)):
        mn.append(min(a[i]))
    for j in range(len(a[0])):
        mx = -1000
        for i in range(len(a)):
            if mx < a[i][j]:
                mx = a[i][j]
        for i in range(len(a)):
            if a[i][j] == mx and a[i][j] == mn[i]:
                return i, j
    return -1,-1

a = create(3,3)
prM(a)
i, j = sedlov(a)
if i == -1 and j == -1:
    print('седлового элемента нет')
else:
    print('номер строки %d, номер столбца %d' % (i+1,j+1))

              
        
