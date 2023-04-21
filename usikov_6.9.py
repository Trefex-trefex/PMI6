def func(m,n, ns):
    '''
    Функция складывает m и n
    Результат: строка с ответом в той же сс
    '''
    if m == -1 or n == -1:
        return 'Алееее'
    s = m + n
    st = ''
    while s > 0:
        d = s%ns
        st = str(d) + st
        s //= ns
    return st

def ToDec(x, ns):
    '''
    Функция переводит в десятичную cc
    возможно это можно сделать так: int(x, ns)
    '''
    for i in range(ns, 10):
        if str(i) in x:
            return -1
            
    n = 0
    for i in range(len(x)):
        n += int(x[i])*ns**(len(x)-1-i)
    return n

ns = int(input('система счисления: '))   
m = input('первое число: ')
n = input('второе число: ')

m_int = ToDec(m, ns)
n_int = ToDec(n, ns)
print(func(m_int, n_int, ns))
