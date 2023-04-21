'''
Cоздать файл длиной n (n где-то между [n1,n2]) из диапозона [-m,m]
'''
import random

n1 = int(input('Введите n1 ( > 0): '))
n2 = int(input('Введите n2 ( n2 > n1): '))
m = int(input('Введите m: '))
n = random.randint(n1,n2)
print()
print('Генерация файла из ',n,' чисел из диапозона [-',m,',',m,']')

list_ = [random.randint(-abs(m),abs(m)) for i in range(n)]

with open('Random_chisla','w') as fp:
    for elem in list_:
        fp.write(str(elem) + ' ')

