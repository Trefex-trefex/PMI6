"""
Дан список, состоящий из 𝑛случайных натуральных чисел.
Создать словарь, ключами  которого  будут  две  строки:  «primes»  и  «composites».
По  ключу «primes» значением должен быть список простых чисел из исходного списка,
по  ключу  «composites» —список  составных.
Для  формирования  словаря напишите функцию с входным параметром типа list.
"""


def isprime(x):
    flag = x > 1
    d = 2
    while flag and d < int(x**0.5) + 1:
        flag = x % d != 0
        d += 1
    return flag


def f(a):
    a.sort()
    ans = {"primes": [], "composites": []} 
    for i in a:
        if isprime(i):
            ans["primes"].append(i)
        else:
            ans["composites"].append(i)
    return ans


a = [20, 13, 2, 5, 6, 7, 1, 8, 12, 14, 13]

print(f(a))
    
