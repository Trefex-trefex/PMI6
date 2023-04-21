'''
Проверка на простоту рекурсией
'''
def prosto (n, delitel):
    if delitel >= 2 and n % delitel == 0:
        return False
    elif delitel >=2:
        return(prosto(n,delitel-1))
    else:
        return True

def prodtota_spiska(list_,k=0):
    if k < len(list_) and prosto(list_[k],list_[k]-1):
        return True
    elif k < len(list_):
        return (prodtota_spiska(list_,k+1))
    else:
        return False

s = []
n = int(input('Кол-во элементов списка: '))
for i in range(n):
    x = int(input('s[%d] = ' % i))
    s.append(x)
print(prodtota_spiska(s))

'''
тест:
Кол-во элементов списка: 4
s[0] = 3
s[1] = 2
s[2] = 3
s[3] = 1
True
'''
