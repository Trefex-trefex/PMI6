def f(s):
    '''
    функция печатает в алфавитном порядке все буквы, которые встречаются в строке
    '''
    a = [i for i in s if i.isalpha()]
    a.sort()
    s1 = ''
    for a1, a2 in zip(a, a[1:]):
        if a1<a2:
            s1 += a1
    return s1

a = 'hello, i am misha'
print(f(a))
