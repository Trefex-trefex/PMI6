'''
Далее сложите эти матрицы и выводите их в файл OutputMatrix.txt, имеющий такую
же структуру, как и входные файлы
'''

def obrabotka(fail):
    fp = open(fail, 'r')
    razm = fp.readline().strip('\n')
    mt = []
    s = fp.readline().strip('\n')
    s = s.split()
    mt.append(s)
    while s:
        s = fp.readline().strip('\n')
        s = s.split()
        mt.append(s)
    mt = mt[:-1]
    fp.close()
    return (razm, mt)

r1, mt1 = obrabotka('InputMatrix1.txt')
r2, mt2 = obrabotka('InputMatrix2.txt')

fp = open('OutputMatrix.txt','w')
fp.write(str(r1) + '\n')

i = 0
while i < int(r1):
    j = 0
    while j < int(r1):
        fp.write(str(int(mt1[i][j])+int(mt1[i][j])) + ' ')
        j +=1
    fp.write('\n')
    i += 1

fp.close()
