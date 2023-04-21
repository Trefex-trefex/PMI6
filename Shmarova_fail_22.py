'''
Кол-во пар, где сумма элементов нечетная, произведение делится на 13,
а номера элементов отличаются менее чем на 5
'''

fp = open('22_test.txt', 'r')
kolvo = fp.readline().strip('\n')
kolvo = int(kolvo)
pamyat = []
s = fp.readline().strip('\n')
pamyat.append(int(s))
for i in range(kolvo-1): 
    s = fp.readline().strip('\n')
    pamyat.append(int(s))

chet = 0
for i in range(kolvo-1):
    if kolvo-1 - 1 - i < 5:
        kon = kolvo - 1
    else:
        kon = i + 5
    for j in range(i+1,kon):
        if ((pamyat[i]+pamyat[j]) % 2 != 0) and ((pamyat[i]*pamyat[j]) % 13 == 0):
            chet += 1
fp.close()

print(chet)
