'''
создаются словари тремя разными способами
'''
def f1():
    s = {'ФИО':[], 'курс':[], 'группа':[]}
    flag =''
    while flag != 'stop':
        name = input('введите имя ')
        curs = int(input('введите курс '))
        group = int(input('введите группу '))
        flag = input('введите stop, если хотите остановиться ')
        s['ФИО'].append(name)
        s['курс'].append(curs)
        s['группа'].append(group)
    return s

s = {'ФИО':['Mark oaoa', 'semen semenich'], 'курс':[4, 89], 'группа':[1, 1]}

s1 = dict([['ФИО', ['Mark oaoa', 'semen semenich']],['курс', [4, 89]],['группа', [1, 1]]])

s2 = f1()

print(s)
print(s1)
print(s2)
