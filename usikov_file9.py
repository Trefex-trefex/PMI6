'''
Записать вновыйфайлте числа, в десятичном представлении которых использованы только нечетные цифры
'''
f = open('ans_ex10.txt', 'w')

for s in open('ex10.txt'):
    a = s.split()
    for x in a:
        if all(i in '13579' for i in x):
            f.write(x+'\n')
f.close()
