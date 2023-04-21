'''
Используя методы seek и tell переверните строку с заданным номером. Например,
"abc" → "cba".
'''
def reverse(s):
    rs = ''
    for i in range(len(s)-1,-1,-1):
        rs += s[i]
    return rs

fp = open('228.txt','r')
n = int(input('Введите строчку, чтобы перевернуть: '))


chet = 1
flag = False
pamyat = []
if chet == n:
    nach = fp.tell()
    s = fp.readline().strip('\n')
    zapomnila = s
    flag = True
elif flag:
    s = fp.readline().strip('\n')
    pamyat.append(s)
else:
    s = fp.readline().strip('\n')
while s:
    chet += 1
    if chet == n:
        nach = fp.tell()
        s = fp.readline().strip('\n')
        zapomnila = s
        flag = True
    elif flag:
        s = fp.readline().strip('\n')
        pamyat.append(s)
    else:
        s = fp.readline().strip('\n')
pamyat = pamyat[:-1]
zapomnila = reverse(zapomnila)
fp.close()

fp = open('228.txt','a')
fp.truncate(nach)
fp.write(zapomnila + '\n')
for elem in pamyat:
    fp.write(elem + '\n')
fp.close()
