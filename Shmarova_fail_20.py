'''
в каждой строке поменять первую и последнюю букву
'''

def obmen(s,nach,kon):
    s = s[kon-nach-3]+s[1:kon-nach-3]+s[0]
    return s

fp = open('228.txt','r')
pamyat = []

nach = fp.tell()
s = fp.readline().strip('\n')
kon = fp.tell()
pamyat.append(obmen(s,nach,kon))

while s:
    print(s)
    nach = fp.tell()
    s = fp.readline().strip('\n')
    kon = fp.tell()
    if s != '':
        pamyat.append(obmen(s,nach,kon))
print(pamyat)
fp.close()

fp = open('228.txt','w')
for elem in pamyat:
    fp.write(elem + '\n')
fp.close()
