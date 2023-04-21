'''
Проверка биномиальных коэф. рекурсией
'''

def binom_kof(n,m):
    if (n == 0 and m > 0) or m == n >= 0:
        return 1
    elif n > m and m > 0:
        return 0
    else:
        return (binom_kof(n-1,m-1) + binom_kof(n,m-1))

m = int(input('Введите m: '))

for i in range(m):
    print()
    for j in range(i+1):
        print( binom_kof(j,i), end = ' ')


'''
Тест
Введите m: 5

1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
'''
