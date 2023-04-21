def func(a, n):
    '''
    функция переводит целые числа из десятичной системы счисления в n-ую
    '''
    s = ''
    while a > 0:
        d = a%n
        s = str(d) + s
        a //= n
    return s

print(func(11,7))
        
