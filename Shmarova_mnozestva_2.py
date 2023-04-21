'''
Дана  строка, состоящая  из  символов  латинского
алфавита  и  пробелов. Выведите на экран те буквы,
которые встречаются в каждом слове строки только один раз.
'''

s = input('Введите  строку: ')
s = s.split()

s1 = set(s[0])
s2 = set()
flag = True

for elem in s:
    i = 0
    while i < len(elem):
        if elem.count(elem[i]) < 2:
            el = set(elem)
            s2 = el.intersection(s1)
        else:
            s2.discard(elem[i])
        i += 1

print(s2)
