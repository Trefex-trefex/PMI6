'''
Написать функцию считывания размерности 𝑛 и матрицы из файла InputMatrix.txt
в двумерный список 𝐿. Далее матрица транспонируется и выводится в файл
OutputMatrix.txt, имеющий такую же структуру, как и входной файл.
'''

fp = open('InputMatrix.txt', 'r')
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

print(mt)
print(razm)

fp = open('OutputMatrix.txt','w')
fp.write(str(razm) + '\n')

i = 0
while i < int(razm):
    j = 0
    while j < int(razm):
        fp.write(mt[j][i] + ' ')
        j +=1
    fp.write('\n')
    i += 1

fp.close()


