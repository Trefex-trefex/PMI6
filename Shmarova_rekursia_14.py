'''
Проверка наличия в строчке + - * / рекурсией
'''

def poisk(s,k=0):
    s1 = '+-*/'
    if k < len(s) and (s1.find(s[k]) == -1):
        return poisk(s,k+1)
    elif k < len(s):
        return True
    else:
        return False
s = input('Введите строчку: \n')
print(poisk(s))

'''
Тест
Введите строчку: 
12ewqdas
False
'''
