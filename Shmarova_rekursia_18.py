'''
18 задание с многомерными списками и рекурсиями
'''
def pervoe(L):
    '''
    1) С  помощью  рекурсивной  функции  проверить,
    есть  ли  среди  элементов многомерного списка строки.
    '''
    flag = False
    for x in L:
        if not isinstance(x, list):
            if not isinstance(x, (bool,int)):
                flag = True 
        else:
            flag = flag or pervoe(x)
    return flag

def chetvertoe(L):
    '''
    4) С  помощью  рекурсивной  функциинайти
    количество четных  чисел многомерного списка.
    '''
    chet = 0
    for x in L:
        if not isinstance(x, list):
            if not isinstance(x, (bool,str)):
                if x % 2 == 0:
                    chet += 1
        else:
            chet = chet + chetvertoe(x)
    return chet

L = [1, [False, [[3, 10], '123', -12], [2, 0.5, [5, 'abc', True]], 4]]
#L = [4,[1,2,8],[1,2,3]]
#Я еще один вариант, где много четных и нет строчек в комментарий добавила, он работает

print(pervoe(L)) 
print(chetvertoe(L))
