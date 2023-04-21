'''
Заменить созданный файлна новый, в котором по отношению к исходному файлу
меняются местами фрагменты по следующей схеме: abc -> cba
'''
import random
import os

fp = open('New_fail.txt', 'w+')

#Создаю файл как в 11 и 12, надеюсь так можно
strok = random.randint(1,11)
list_ = []
for elem in range(strok):
    chisel = random.randint(0,6)
    l = [random.randint(-10,10) for i in range(chisel)]
    list_.append(l)
    for elem_2 in l:
        fp.write(str(elem_2) + ' ')
    fp.write('\n')

print(list_)

ostatok = strok % 3
m = strok // 3
if ostatok == 0:
    L1 = list_[:m]
    L2 = list_[m:2*m]
    L3 = list_[2*m:]
elif ostatok == 1:
    L1 = list_[:m+1]
    L2 = list_[m+1:2*m+1]
    L3 = list_[2*m+1:]
else:
    L1 = list_[:m+1]
    L2 = list_[m+1:2*m+2]
    L3 = list_[2*m+2:]

L = L2+L3+L1
fp.close()
os.remove('New_fail.txt')
fp = open('New_fail.txt', 'w+')
for elem in L:
    for elem_2 in elem:
        fp.write(str(elem_2) + ' ')
    fp.write('\n')
fp.close()
