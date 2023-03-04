def print_matrix(a):
    '''
    Печать матрицы
    a - матрица, подаваемая на вход
    '''
    for row in a:
        for i in row:
            print('%3d' % i, end='') # выводится целочисленный результат, на каждый эл-т 3 позиции
        print()

def create_matrix(m,n):
    '''
    Создание целочисленной матрицы с рандомными эл-тами
    (from random import randint) -  необходимый import
    m - количество строк
    n - количество столбцов
    возврат - готовая матрица
    '''
    a = [[randint(-20, 20) for i in range(n)] for i in range(m)] # числа в диапазоне от -20 до 20
    return a

def empty_matrix(m,n):
    '''
    Создание пустой матрицы
    m - количество строк
    n - количество столбцов
    возврат - готовая матрица
    '''
    a = [[0 for i in range(n)] for i in range(m)] # пустая матрица  m x n
    return a


